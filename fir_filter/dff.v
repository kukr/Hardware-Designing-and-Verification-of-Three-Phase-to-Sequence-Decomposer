`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:33 11/13/2017 
// Design Name: 
// Module Name:    dff 
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
module dff(clk,rst,d,q);// sub module d flipflop
input clk,rst;
input [7:0]d;
output [7:0]q;
reg [7:0]q;
always@(posedge clk)
begin
if(rst==1)
begin
q=0;
end
else
begin
q=d;
end
end
endmodule