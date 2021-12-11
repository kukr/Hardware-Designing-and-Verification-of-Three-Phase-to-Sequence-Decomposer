`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:02 04/12/2018 
// Design Name: 
// Module Name:    FIR_filter 
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
module FIR_filter #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Vin,
	output signed [M-1:0] Vout
    );
	 wire signed [M-1:0] Vtemp;
	 FIR_order32 i1(clk,rst,Vin,Vtemp);
	 DC_offset_removal i2(clk,rst,Vtemp,Vout);
endmodule
