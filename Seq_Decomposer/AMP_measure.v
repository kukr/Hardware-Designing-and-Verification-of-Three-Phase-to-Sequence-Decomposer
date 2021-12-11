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
	output reg [M-1:0] amp);
	
	reg signed [M-1:0] max_val;
	reg signed [M-1:0] min_val;
	reg signed [M-1:0] Vin_prev;
	reg signed [M-1:0] max_pos=2**(M-1)-1;
	reg signed [M-1:0] max_neg=-2**(M-1);
	
	parameter [1:0] s0=2'b00, s1=2'b01, s2=2'b10, s3=2'b11;
	reg [1:0] state=s0, next_state=s0;
		
	always @(posedge clk,posedge rst)
	begin
		if(rst)
			begin
				max_val=0;
				min_val=0;
				Vin_prev=0;
				amp=0;
			end
		else
			begin
				case(state)
					s0: 
						begin
							if( Vin_prev < 0 && Vin>=0)
								next_state=s1;
							else
								next_state=s0;
						end
					
					s1:
						begin
							if( Vin_prev >= 0 && Vin < 0)
								next_state=s2;
							else
							begin
								next_state=s1;
								if(Vin > max_val)
									max_val=Vin;
							end
						end
						
					s2:
						begin
							if( Vin_prev < 0 && Vin >= 0)
								next_state=s3;
							else
							begin
								if(Vin < min_val)
									min_val=Vin;
								next_state=s2;
							end
						end
						
					s3:
						begin
							next_state=s0;
							if(max_val>=min_val)
								begin
									amp = (max_val-min_val)/2;
									//offset = (max_val+min_val)/2;
								end
							max_val=0;
							min_val=0;
						end
				endcase
				Vin_prev=Vin;
				state=next_state;
			end
			
	end
	
endmodule


//module AMP_measure #(parameter M=14)(
//	input clk,
//	input rst,
//	input signed [M-1:0] Vin,
//	output reg [M-1:0] amp,
//	output reg signed [M-1:0] offset);
//	
//	reg signed [M-1:0] max_val;
//	reg signed [M-1:0] min_val;
//	reg signed [M-1:0] Vin_1,Vin_2;
//	reg signed [M:0] amp_temp,offset_temp; 
//	reg signed [M-1:0] max_pos=2**(M-1)-1;
//	reg signed [M-1:0] max_neg=-2**(M-1);
//		
//	always @(posedge clk, posedge rst)
//		begin
//			//$display("amp=%d, offset=%d, max_val=%d, min_val=%d",amp,offset,max_val,min_val);
//			if(rst)
//				begin
//					max_val=0;
//					min_val=0;
//					Vin_1=0;
//					Vin_2=0;
//					amp=0;
//					offset=0;
//				end
//			else
//				begin
//					if(Vin_1 > Vin_2 && Vin < Vin_1 && (Vin_1-Vin_2) < 500)
//						max_val=Vin;	
//					else if(Vin_1 < Vin_2 && Vin > Vin_1 && (Vin_2-Vin_1) < 500)
//						min_val=Vin;
//					if(max_val<=max_pos && min_val>=max_neg && max_val>=min_val)
//					begin
//						amp = (max_val-min_val)/2;
//						offset = (max_val+min_val)/2;
//					end
//					
//					Vin_2=Vin_1;	
//					Vin_1=Vin;
//				end
//		end
//endmodule
