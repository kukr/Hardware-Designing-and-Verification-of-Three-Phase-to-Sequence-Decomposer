`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:50 03/06/2018 
// Design Name: 
// Module Name:    adcdacint 
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
module adcdac_FSM(clk,reset
    );
	 
	input clk;
	input reset;
	 
	reg sce_enable=0;
	
	// ADC signals
	reg adc_enable=0;
	wire adc_done_B1, adc_done_B2;
	output SPI_MISO_B1;
	output SPI_MOSI_B1;
	output AMP_CS_B1;
	output SPI_SCK_B1;
	output AMP_SHDN_B1;
	output AD_CONV_B1;
	output SPI_MOSI_B2;
	output AMP_CS_B2;
	output SPI_SCK_B2;
	output AMP_SHDN_B2;
	output AD_CONV_B2;
	input SPI_MISO_B2;
	wire [13:0] adc_in_A;
	wire [13:0] adc_in_B;
	wire [13:0] adc_in_C;
	wire [13:0] adc_in_D;
	
	// DAC signals
	reg dac_enable=0;
	wire dac_done;
	reg [11:0] datain;
	reg [3:0] address;
	wire dac_mosi;
	wire dac_miso;
	wire dac_cs;
	wire dac_sck;
	wire dac_clr;

	reg [3:0] idle=2'b00, adc_active=2'b01, sce_active=2'b10, dac_active=2'b11;
	reg [3:0] state,next_state;
	
	adcread Iadc1(clk,reset, adc_enable, adc_done_B1, SPI_MOSI_B1, AMP_CS_B1, 
						SPI_SCK_B1, AMP_SHDN_B1, AD_CONV_B1, SPI_MISO_B1, adc_in_A, adc_in_B);
	adcread Iadc2(clk,reset, adc_enable, adc_done_B2, SPI_MOSI_B2, AMP_CS_B2, 
						SPI_SCK_B2, AMP_SHDN_B2, AD_CONV_B2, SPI_MISO_B2, adc_in_C, adc_in_D);	
	
	dacwrite Idac(clk, reset, dac_enable, dac_done, datain, address, AD_CONV, dac_mosi, dac_miso, dac_cs, dac_sck, dac_clr);

	always @(posedge clk or posedge rst)
		begin
			case(state)
				idle: begin
						adc_enable=0;
						dac_enable=0;
						sce_enable=0;
						if(rst)
							next_state=idle;
						else
							next_state=adc_active;
						end
				adc_active:
						begin
						adc_enable=1;
						dac_enable=0;
						sce_enable=0;
						if(adc_done_B1 & adc_done_B2)
							next_state=sce_active;
						else
							next_state=adc_active;
						end
				sce_active:
						begin
						adc_enable=0;
						dac_enable=0;
						sce_enable=1;
						if(sce_done)
							next_state=dac_active;
						else
							next_state=sce_active;
						end
				dac_active:
						begin
						adc_enable=0;
						dac_enable=1;
						sce_enable=0;
						if(dac_done)
							next_state=adc_active;
						else
							next_state=dac_active;
						end
			endcase
			state=next_state;
		end
		
	
	

endmodule
