`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:50 11/09/2017 
// Design Name: 
// Module Name:    PHASE_measure 
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
module PHASE_measure #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Vref,
	input signed [M-1:0] Vin,
	output reg [15:0] phase
    );
	 
	//parameter [7:0] phase_multiplier=100;
	
	reg [7:0] counter;
	reg [1:0] state,next_state;
	reg [1:0] reset=2'b00, wait1=2'b01, wait2=2'b10, result=2'b11;
	reg signed [M-1:0] Vref_prev,Vin_prev;
	
	wire [15:0] counter2,phase_temp;
//	wire [15:0] num,den;
//	assign num=360*counter;
//	assign den=16'd32;
//	division #(.WIDTH(16)) div2(num,den,phase_temp);
	
	always @(posedge clk,posedge rst)
		begin
		if(rst)
			state<=reset;
		else
			state<=next_state;
		end
			
	always @(posedge clk)
	begin
		case(state)
			reset: begin 
						counter=0; 
						phase=0;
						next_state=wait1;
					 end
			wait1: if(Vref_prev >= 0 && Vref < 0) 
						begin 
							counter=0; 
							next_state=wait2; 
						end
					
			wait2: if(Vin_prev >= 0 && Vin < 0)
						next_state=result; 
					 else
						begin
						counter=counter+1;
						end
			result: begin
						
						phase = (360*(counter%32))/32;
						next_state = wait1;
						end
		endcase
		Vref_prev=Vref;
		Vin_prev=Vin;
	end

endmodule
