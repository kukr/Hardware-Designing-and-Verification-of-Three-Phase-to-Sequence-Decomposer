`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:40 10/04/2017 
// Design Name: 
// Module Name:    DZCPD_module 
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
module DZCPD_module #(parameter M=14)(
   input clk,
	input rst,
	input signed [M-1:0] Vref,
	input signed [M-1:0] Vin,
	input [7:0] k,
	output [15:0] freq,
	output signed [M-1:0] amp,
	output [15:0] phase
	);
	
	//wire signed [M-1:0] offset;
	
	AMP_measure m1(clk,rst,Vin,amp);
	FREQ_measure m3(clk,rst,Vin,k,freq);
	PHASE_measure m4(clk,rst,Vref,Vin,phase);
	
endmodule
