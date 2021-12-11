`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:37:08 11/09/2017 
// Design Name: 
// Module Name:    AMP_measure 
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
module AMP_measure #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Vin,
	output reg [M-1:0] amp,
	output reg signed [M-1:0] offset);
	
	reg signed [M-1:0] max_val;
	reg signed [M-1:0] min_val;
	reg signed [M-1:0] Vin_1,Vin_2;
	reg signed [M:0] amp_temp,offset_temp; 
	reg signed [M-1:0] max_pos=2**(M-1)-1;
	reg signed [M-1:0] max_neg=-2**(M-1);
		
	always @(posedge clk, posedge rst)
		begin
			//$display("amp=%d, offset=%d, max_val=%d, min_val=%d",amp,offset,max_val,min_val);
			if(rst)
				begin
					max_val=0;
					min_val=0;
					Vin_1=0;
					Vin_2=0;
					amp=0;
					offset=0;
				end
			else
				begin
					if(Vin_1 > Vin_2 && Vin < Vin_1 && (Vin_1-Vin_2) < 100)
						max_val=Vin;	
					else if(Vin_1 < Vin_2 && Vin > Vin_1 && (Vin_2-Vin_1) < 100)
						min_val=Vin;
					if(max_val<=max_pos && min_val>=max_neg && max_val>=min_val)
					begin
						amp = (max_val-min_val)/2;
						offset = (max_val+min_val)/2;
					end
					
					Vin_2=Vin_1;	
					Vin_1=Vin;
				end
		end
endmodule
