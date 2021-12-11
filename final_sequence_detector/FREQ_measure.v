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
	input signed [M-1:0] offset,
	input [7:0] k,
	output reg [15:0] freq
    );
	
	
	reg [15:0] counter; 
	wire [23:0] freq_temp;
	wire [23:0] den;
	wire [23:0] num=800000;
	
	assign den = counter>0?2*counter*k:1;
	
	division #(.WIDTH(24)) dv1(num,den,freq_temp);
	
	always @(posedge clk,posedge rst)
	begin
		if(rst)
			begin
				counter=0;
				freq=0;
			end
		else
			begin
					//$display("counter=%d, den=%d, freq_temp=%d, freq=%d",counter,den,freq_temp,freq);
					if(Vin>=offset)
						begin
						counter=counter+1;
						end
					else if(counter!=0)
						begin
							freq=freq_temp[15:0];
							counter=0;
						end
			end
	end
	
endmodule
