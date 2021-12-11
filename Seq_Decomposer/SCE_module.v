`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:33:27 11/03/2017 
// Design Name: 
// Module Name:    SCE_module 
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

//module SCE_module #(parameter M=14)(
//	input clk,
//	input rst,
//	input signed [M-1:0] Va,
//	input signed [M-1:0] Vb,
//	input signed [M-1:0] Vc,
//	output reg signed [M-1:0] Vzero,
//	output reg signed [M-1:0] Vpos,
//	output reg signed [M-1:0] Vneg
//    );
//	reg signed [M-1:0] Va1,Vb1,Vc1;
//	reg signed [15:0] Pb,Zb,Pc,Zc;
//	wire signed [31:0] Vpos1,Vneg1,Vzero1;
//	reg signed [11:0] cf=1000;
//	reg signed [M-1:0] max_pos=2**(M-1)-1;
//	reg signed [M-1:0] max_neg=-2**(M-1);
//	
//	wire signed [31:0] num1,num2,num3; 
//	assign num1=(Va*cf+Pb*Vb+Zc*Vc1)-(Zb*Vb1+Pc*Vc);
//	assign num2=(Va*cf+Zc*Vb1+Pb*Vc)-(Pc*Vb+Zb*Vc1);
//	assign num3=(Va+Vb+Vc)*cf;
//	division #(.WIDTH(32)) dv1(num1,3000,Vpos1);
//	division #(.WIDTH(32)) dv2(num2,3000,Vneg1);
//	division #(.WIDTH(32)) dv3(num3,3000,Vzero1);
//	
//	initial 
//		begin
//		Va1=0;
//		Vb1=0;
//		Vc1=0;
//		Pb=3853;
//		Zb=4439;
//		Pc=4853;
//		Zc=4439;
//		end
//	
//	always @(posedge clk, posedge rst)
//		begin
//		if(rst)
//		begin
//			Va1=0;
//			Vb1=0;
//			Vc1=0;
//		end
//		else
//		begin
//	
//			//Vpos_temp=((Va*k+Pb*Vb+Zc*Vc1)-(Zb*Vb1+Pc*Vc))/(3*k);
//			//Vneg_temp=((Va*k+Zc*Vb1+Pb*Vc)-(Pc*Vb+Zb*Vc1))/(3*k);
//			//Vzero_temp=(Va+Vb+Vc)/3;
//			
//			////////////////////////////
//			//$display("Pb=%d, Zb=%d, Pc=%d, Zc=%d",Pb,Zb,Pc,Zc);
//			//$display("Va1=%d, Vb1=%d, Vc1=%d",Va1,Vb1,Vc1);
//			//$display("Va2=%d, Vb2=%d, Vc2=%d",Va2,Vb2,Vc2);
//			//$display("num1=%d",num1);
//			//$display("num2=%d",num2);
//			//$display("num3=%d",num3);
//			//$display("Vpos1=%d",Vpos1);
//			//$display("Vneg1=%d",Vneg1);
//			//$display("Vzero1=%d",Vzero1);
//			///////////////////////////
//			
//			if(Vpos1>=max_neg && Vpos1<=max_pos)
//				Vpos=Vpos1[M-1:0];
//			if(Vneg1>=max_neg && Vneg1<=max_pos)
//				Vneg=Vneg1[M-1:0];
//			if(Vzero1>=max_neg && Vzero1<=max_pos)
//				Vzero=Vzero1[M-1:0];
//			
//			Va1=Va;
//			Vb1=Vb;
//			Vc1=Vc;
//			
//		end
//		end
//		
//endmodule



module SCE_module #(parameter M=14)(
	input clk,
	input rst,
	input signed [M-1:0] Va,
	input signed [M-1:0] Vb,
	input signed [M-1:0] Vc,
	output signed [M-1:0] Vzero,
	output signed [M-1:0] Vpos,
	output signed [M-1:0] Vneg
    );
	reg signed [M-1:0] Va1=0,Vb1=0,Vc1=0,Va2=0,Vb2=0,Vc2=0;
	reg signed [15:0] Pb=3853,Zb=4439,Pc=4853,Zc=4439;
	wire signed [31:0] Vpos1,Vneg1,Vzero1;
	reg signed [11:0] cf=1000;
	reg signed [31:0] max_pos=2**(M-1)-1;
	reg signed [31:0] max_neg=-2**(M-1);

	
	wire signed [31:0] num1,num2,num3,den; 
	assign num1=(Va2*cf+Pb*Vb2+Zc*Vc1)-(Zb*Vb1+Pc*Vc2);
	assign num2=(Va2*cf+Zc*Vb1+Pb*Vc2)-(Pc*Vb2+Zb*Vc1);
	assign num3=(Va2+Vb2+Vc2)*cf;
	//assign den=32'd3000;
	
	division #(.WIDTH(32)) dv1(num1,3000,Vpos1);
	division #(.WIDTH(32)) dv2(num2,3000,Vneg1);
	division #(.WIDTH(32)) dv3(num3,3000,Vzero1);
	
	assign Vpos=Vpos1[M-1:0];
	assign Vneg=Vneg1[M-1:0];
	assign Vzero=Vzero1[M-1:0];
	
	always @(posedge clk, posedge rst)
		begin
		if(rst)
		begin
			Va1<=0;
			Vb1<=0;
			Vc1<=0;
			Va2<=0;
			Vb2<=0;
			Vc2<=0;
		end
		else
		begin
			Va1<=Va2;
			Vb1<=Vb2;
			Vc1<=Vc2;
			Va2<=Va;
			Vb2<=Vb;
			Vc2<=Vc;
		end
		end
		
endmodule

