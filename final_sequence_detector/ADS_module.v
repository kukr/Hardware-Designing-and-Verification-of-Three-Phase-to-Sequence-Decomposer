`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:10:09 11/08/2017 
// Design Name: 
// Module Name:    ADS_module 
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
module ADS_module(
	input clk,
	input [7:0] k,
	output reg dclk
    );
	 integer i=0;
	 initial dclk=0;
	 
	 always @(posedge clk)
	 begin
		i=i+1;
		if(i>=k/2)
		begin
			dclk=~dclk;
			i=0;
		end
	 end
	 
endmodule
