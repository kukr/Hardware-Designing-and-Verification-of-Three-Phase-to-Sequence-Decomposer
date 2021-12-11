`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:44 11/09/2017 
// Design Name: 
// Module Name:    FREQ_measure 
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
	module FREQ_measure #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Vin,
	input [7:0] k,
	output reg [15:0] freq
    );
	
	
	reg [15:0] counter=0; 
	reg signed [M-1:0] Vin_prev=0;
	
	parameter [1:0] idle=2'b00, count1=2'b01, count2=2'b10, done=2'b11;
	reg [1:0] state=idle, next_state=idle;	
	
	wire [23:0] freq_temp;
	wire [23:0] den;
	wire [23:0] num=800000;
	
	assign den = counter>0 ? (counter+1)*k : 1;
	
	
	
	division #(.WIDTH(24)) dv1(num,den,freq_temp);
	
	always @(posedge clk,posedge rst)
	begin
		if(rst)
			begin
				counter=0;
				freq=0;
				next_state=idle;
			end
		else
			begin
				case(state)
					idle: 
						begin
							if( Vin_prev < 0 && Vin>=0)
								next_state=count1;
							else
								begin
								next_state=idle;
								counter=1;
								end
						end
					
					count1:
						begin
							if( Vin_prev >= 0 && Vin < 0)
								next_state=count2;
							else
							begin
								next_state=count1;
								counter=counter+1;
							end
						end
						
					count2:
						begin
							if( Vin_prev < 0 && Vin >= 0)
								next_state=done;
							else
							begin
								next_state=count2;
								counter=counter+1;
							end
						end
						
					done:
						begin
							freq=freq_temp[15:0];
							counter=0;
							next_state=idle;
						end
				endcase
				Vin_prev = Vin;
				state = next_state;
			end
			//$display("Counter=%d",counter);
			
	end
	
endmodule
