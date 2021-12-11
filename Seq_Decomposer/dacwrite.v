`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:46 03/06/2018 
// Design Name: 
// Module Name:    dacwrite 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module dacwrite( dacclk, reset, dac_enable, dac_done, datain, address, AD_CONV, dac_mosi, dac_miso, dac_cs, dac_sck, dac_clr);

	input dacclk;
	input reset;
	input dac_enable;
	output reg dac_done;
	input [11:0] datain;
	input [3:0] address;
	output reg AD_CONV;
	input dac_mosi;
	output reg dac_miso;
	output reg dac_cs;
	output reg dac_sck;
	output reg dac_clr;


	reg spi_ss_b=1'b1;
	reg sf_ce0=1'b1;
	reg fpga_init_b=1'b0;
	reg amp_cs=1'b1;
	reg ad_conv=1'b0;
	reg [3:0] command=4'b0011;

	parameter idle=3'b000, ready=3'b001, delay=3'b010, trans=3'b011, read=3'b100, increment=3'b101, check=3'b110;
	reg [2:0] state=idle;
	reg ack;
	reg[31:0] previousdata;

	wire [31:0] dacdata;
	assign dacdata={8'b00000000,command,address,datain,4'b0000};
	integer index=0;


	always @(posedge dacclk or posedge reset) begin
		 if (reset) begin
			  index<=0; 
			  dac_mosi<=0;
			  dac_clr<=0;
			  dac_sck<=0;
			  dac_cs<=1;
		 end
		 else begin
			  dac_clr<=1;
			  case(state)
			  idle: begin
						 dac_sck <= 0;
						 dac_cs <= 1;
						 index <= 0;
						 dac_mosi <= 0;
						 ack <= 1;
						 
						 if(dac_enable)
							begin
								state <= ready;
								AD_CONV <= 1'b0;
								dac_done <= 0;
							end
						 else
							begin
								state <= idle;
								dac_done <= 1;
							end
						 
					  end

			  ready: begin
						 ack <= 0;
						 dac_cs <= 0;
						 dac_sck <= 0;
						 dac_mosi <= dacdata[31-index];
						 state <= delay;
						end

			  delay: begin
						 state <= trans;
						end

			  trans: begin
						 dac_sck <= 1;
						 state <= read;                  
						end

			  read: begin
						 dac_sck <= 1;
						 previousdata[31-index]<=dac_miso;
						 state <= increment;
					  end

			  increment: begin
						 dac_sck <= 1;
						 index <= index + 1;
						 state <= check;
							 end

			  check: begin
						 dac_sck <= 1;
						 
						 if (31-index < 0) begin
							  state <= idle;
							  dac_done <= 1;
							  AD_CONV <= 1'b1;
							  end
						 else begin
							  state <= ready;
						 end
						end  
			  endcase
		 end
	end
endmodule
