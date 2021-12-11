`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:58 04/12/2018 
// Design Name: 
// Module Name:    DC_offset_removal 
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


module DC_offset_removal #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Vin,
	output reg signed [M-1:0] Vout);
	
	reg signed [M-1:0] Vtemp;
	reg signed [M-1:0] max_val;
	reg signed [M-1:0] min_val;
	reg signed [M-1:0] Vin_prev;
	reg signed [M-1:0] offset=0;
	
	parameter [1:0] s0=2'b00, s1=2'b01, s2=2'b10, s3=2'b11;
	reg [1:0] state=s0, next_state=s0;
	
	
	
	always @(posedge clk,posedge rst)
	begin
		if(rst)
			begin
				max_val=0;
				min_val=0;
				offset=0;
				Vin_prev=0;
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
									offset = (max_val+min_val)/2;
								end
							max_val=0;
							min_val=0;
						end
				endcase
				Vin_prev=Vin;
				Vout=Vin-offset;
				state=next_state;
			end
		
	end
	
endmodule
