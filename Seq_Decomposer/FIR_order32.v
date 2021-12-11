`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:04:29 04/12/2018 
// Design Name: 
// Module Name:    FIR_order32 
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

module FIR_order32 #(parameter M=14)(
	input dclk,
	input rst,
	input signed [M-1:0] vin,
	output signed [M-1:0] vout);

// constant are taken from matlab filterDesigner and are multiplied by 10^6
// Highest constant value = 50069, ceil(log2(50069)) = 16 // 16 + 14 + 5 = 35

	reg signed [15:0] h[0:32];
	reg signed [M-1:0] vin_filter;
	integer j = 0,i=0;
	reg signed [M-1:0] X[0:32];
	reg signed [49:0] temp=0;
	wire signed [49:0] temp1,temp2,d;
	
	assign vout=vin_filter;
	assign temp1=temp;
	//assign d=73705;
	// d is division factor for making the filter outpu amplitude 
	// proprtional to input amplitude
	//assign d=370370;
	assign d=500000;

	division #(.WIDTH(50)) div(temp1,d,temp2);
	initial
	begin
		h[0] = 7662;
		h[1] = 10397;
		h[2] = 13413;
		h[3] = 16666;
		h[4] = 20103;
		h[5] = 23660;
		h[6] = 27268;
		h[7] = 30852;
		h[8] = 34334;
		h[9] = 37636;
		h[10] = 40681;
		h[11] = 43396;
		h[12] = 45716;
		h[13] = 47584;
		h[14] = 48953;
		h[15] = 49788;
		h[16] = 50069;
		h[17] = 49788;
		h[18] = 48953;
		h[19] = 47584;
		h[20] = 45716;
		h[21] = 43396;
		h[22] = 40681;
		h[23] = 37636;
		h[24] = 34334;
		h[25] = 30852;
		h[26] = 27268;
		h[27] = 23660;
		h[28] = 20103;
		h[29] = 16666;
		h[30] = 13413;
		h[31] = 10397;
		h[32] = 7662;
		temp=0;
		vin_filter = 0;
	end


always @(posedge dclk, posedge rst)
begin
	if(rst)
	begin
		temp=0;
		vin_filter=0;
	end
	else
		begin
		if(j<33)
		begin
			X[j] = vin;
			j = j + 1;
		end

		else
		begin
			i =0;
			temp = 0;
			for(i = 0;i<33;i = i+1)
			begin
				//$display("temp=%d, X=%d, i=%d,h=%d, filt=%d",temp,X[32-i],i,h[i],vin_filter);
				temp = temp + X[32-i] * h[i]; 
			end
			vin_filter = temp2[M-1:0];
			
			i = 0;
			
			for(i=1;i<33;i = i + 1)
			begin
				X[i-1] = X[i];
			end
			X[32] = vin;
			
		end
		end
end


endmodule

