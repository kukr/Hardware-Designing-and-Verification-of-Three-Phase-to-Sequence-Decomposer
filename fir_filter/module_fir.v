`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:36 11/13/2017 
// Design Name: 
// Module Name:    module_fir 
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

// main module FIR

/*
module module_fir(clk,rst,x,dataout);
input [7:0]x;
input clk,rst;
output [9:0]dataout;
wire [7:0]d1,d2,d3;
wire [7:0]m1,m2,m3,m4,m5;
wire [7:0]d11,d12,d13,d14;
parameter h0=3'b101;
parameter h1=3'b100;
parameter h2=3'b011;
parameter h3=3'b010;
parameter h4=3'b001;
assign m1=x>>h0;
dff u2(clk,rst,x,d11);
assign m2=d11>>h1;
assign d1=m1+m2;
dff u4(clk,rst,d11,d12);
assign m3=d12>>h2;
assign d2=d1+m3;
dff u6(clk,rst,d12,d13);
assign m4=d13>>h3;
assign d3=d2+m4;
dff u8(clk,rst,d13,d14);
assign m5=d14>>h4;
assign dataout=d3+m5;
endmodule

*/

/*
module module_fir(clk,rst,x,dataout);
parameter order = 5;
parameter data_len = 8;
parameter data_out_l = 16; //data_out_l = ceil(log2((2^data_len)*(order+1)))

parameter [data_len-1:0]h[0:order] = {8'b00000000,8'b00000001,8'b00000010,8'b00000011,8'b00000100,8'b00000101}; //Assign them with the matlab values, comment the random assignment just below


input [data_len-1:0]x;
input clk,rst;
output [data_out_l-1:0]dataout;
wire [data_out_l-1:0]d_out[0:order-1];
wire [data_len-1:0]conv_term[0:order];
wire [data_len-1:0]x_prev[0:order-1];

integer i;

for(i=0;i<=order;i=i+1)
	begin:for_block
	
	if(i == 0)
	begin
	conv_term[i] = x>>h[0];
	x_prev[0] = x;
	//dff u1(clk,rst,x,x_prev[0]);
	//continue;
	end
	
	else if(i == order)
	begin
	conv_term[i] = x_prev[order-1]>>h[order];
	dataout = d_out[order-1] + conv_term[i];
	//continue;
	end
	
	else
	begin
	
	conv_term[i] = x_prev[i-1]>>h[i];
	
	if(i==1)
	d_out[i-1] = conv_term[i-1] + conv_term[i];
	else
	d_out[i-1] = d_out[i-2] + conv_term[i];
	x_prev[i] = x_prev[i-1];
	//dff u2(clk,rst,x_prev[i-1],x_prev[i]);
	end
	
	end

endmodule
*/


module module_fir(clk,rst,x,dataout);
parameter order = 5;
parameter data_len = 8;
parameter data_out_l = 16; //data_out_l = ceil(log2((2^data_len)*(order+1)))

reg [data_len-1:0]h[0:order];
//{8'b00000000,8'b00000001,8'b00000010,8'b00000011,8'b00000100,8'b00000101}; //Assign them with the matlab values, comment the random assignment just below
initial
begin
h[0] = 8'b00000000;
h[1] = 8'b00000001;
h[2] = 8'b00000010;
h[3] = 8'b00000011;
h[4] = 8'b00000100;
h[5] = 8'b00000101;
end

input [data_len-1:0]x;
input clk,rst;
output wire [data_out_l-1:0]dataout;
reg [data_out_l-1:0]temp_res = 0;
reg [data_len-1:0] x_shift_reg[0:order];


//initialize initial data in shift registers
initial
begin
x_shift_reg[0] = 8'b00000000;
x_shift_reg[1] = 8'b00000001;
x_shift_reg[2] = 8'b00000010;
x_shift_reg[3] = 8'b00000011;
x_shift_reg[4] = 8'b00000100;
x_shift_reg[5] = 8'b00000101;
end


integer i;

always@(posedge rst, negedge clk)
begin: always_loop
	if(rst)
	begin
		for(i=0;i<=order;i=i+1)
		begin
			x_shift_reg[i] = 0;
		end
	end

	else
	begin
		for(i=order;i>=1;i=i-1)
		begin
			x_shift_reg[i] = x_shift_reg[i-1];
		end

		x_shift_reg[0] = x;

		for(i=0;i<=order;i=i+1)
		begin
			temp_res = temp_res + (x_shift_reg[i]>>h[i]);
		end

		//dataout = temp_res;
	end
end

assign dataout = temp_res;

endmodule
