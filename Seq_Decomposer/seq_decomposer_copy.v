`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:15:54 04/16/2018 
// Design Name: 
// Module Name:    seq_decomposer_copy 
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
module seq_decomposer_copy(
    );


endmodule

	module SEQ_DECOMPOSER2 #(parameter M=14)(
		input clk,rst,signed [M-1:0] Va, signed [M-1:0] Vb, signed [M-1:0] Vc,
		output dclk, [7:0] k, signed [M-1:0] Vzero,signed [M-1:0] Vpos,signed [M-1:0] Vneg, [15:0] Vref_freq,
		output [M-1:0] Vzero_amp,[15:0] Vzero_freq,[15:0] Vzero_phase,
		output [M-1:0] Vpos_amp,[15:0] Vpos_freq, [15:0] Vpos_phase,
		output [M-1:0] Vneg_amp,[15:0] Vneg_freq, [15:0] Vneg_phase
		 );
		wire signed [M-1:0] Va2,Vb2,Vc2,Va_filtered,Vb_filtered,Vc_filtered;
		wire [23:0] k2,num,den,r;
		wire sample_clk;

		// num=Fs*100/N where Fs=8000 
		assign num = 25000; 
		assign den = Vref_freq;
		assign r = num - k2*den;
		assign k = ((Vref_freq>0) ? ( (r > (den/2))? k2[7:0]+1:k2[7:0]): 1);
		
		division #(.WIDTH(24)) div(num,den,k2);
		DC_offset_removal i1(sample_clk,rst,Va,Va2);
		DC_offset_removal i2(sample_clk,rst,Vb,Vb2);
		DC_offset_removal i3(sample_clk,rst,Vc,Vc2);
		ADS_module m0(clk,1,sample_clk);
		FREQ_measure m1(sample_clk,rst,Va2,8'd1,Vref_freq);
		ADS_module m2(clk,k,dclk);
		FIR_filter m3(dclk,rst,Va2,Va_filtered);
		FIR_filter m4(dclk,rst,Vb2,Vb_filtered);
		FIR_filter m5(dclk,rst,Vc2,Vc_filtered);
		SCE_module m6(dclk,rst,Va_filtered,Vb_filtered,Vc_filtered,Vzero,Vpos,Vneg);
		DZCPD_module m7(dclk,rst,Va_filtered,Vpos,k,Vpos_freq,Vpos_amp,Vpos_phase);
		DZCPD_module m8(dclk,rst,Va_filtered,Vneg,k,Vneg_freq,Vneg_amp,Vneg_phase);
		DZCPD_module m9(dclk,rst,Va_filtered,Vzero,k,Vzero_freq,Vzero_amp,Vzero_phase);

	endmodule


