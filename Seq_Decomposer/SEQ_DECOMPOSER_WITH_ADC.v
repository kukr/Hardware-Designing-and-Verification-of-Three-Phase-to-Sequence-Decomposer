`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:48:41 04/13/2018 
// Design Name: 
// Module Name:    SEQ_DECOMPOSER_WITH_ADC 
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
module SEQ_DECOMPOSER_WITH_ADC #(parameter M=14)(
	input clk_100m,
	input rst,
	output SPI_MOSI,
	output AMP_CS,
	output SPI_SCK,
	output AMP_SHDN,
	output AD_CONV,
	input SPI_MISO,
	output SPI_MOSI_B2,
	output AMP_CS_B2,
	output SPI_SCK_B2,
	output AMP_SHDN_B2,
	output AD_CONV_B2,
	input SPI_MISO_B2,
	//output [7:0] digital_out,
	output tick2
	);

	wire tick1;
	wire signed [M-1:0] Va;
	wire signed [M-1:0] Vb;
	wire signed [M-1:0] Vc;
	wire signed [M-1:0] Vd;
	wire dclk;
	wire [7:0] k;
	wire signed [M-1:0] Vzero;
	wire signed [M-1:0] Vpos;
	wire signed [M-1:0] Vneg;
	wire [15:0] Vref_freq;
	(* KEEP = "True" *) wire [M-1:0] Vzero_amp;
	(* KEEP = "True" *) wire [15:0] Vzero_freq;
	(* KEEP = "True" *) wire [15:0] Vzero_phase;
	(* KEEP = "True" *) wire [M-1:0] Vpos_amp;
	(* KEEP = "True" *) wire [15:0] Vpos_freq;
	(* KEEP = "True" *) wire [15:0] Vpos_phase;
	(* KEEP = "True" *) wire [M-1:0] Vneg_amp;
	(* KEEP = "True" *) wire [15:0] Vneg_freq;
	(* KEEP = "True" *) wire [15:0] Vneg_phase;
	
	wire clk_20k;
	wire clk_40k;
	wire clk_80k;
	wire clk_400k;
	wire clk_16k;
	wire clk_100;
	wire clk_8k;
	
	wire [7:0] D;
	wire [13:0] A_in;
	wire [7:0] B_out;
	//reg [15:0] Fs=80000; 
	
	wire [23:0] k2,num,den,r;
	wire sample_clk;
	
	wire signed [M-1:0] Va2,Vb2,Vc2,Va_filtered,Vb_filtered,Vc_filtered;
	
	// dummy signals
	wire signed [M-1:0] Va2_temp,Vb2_temp,Vc2_temp,Vaf_temp,Vbf_temp,Vcf_temp;
	
	assign Va2_temp=Va2;
	assign Vb2_temp=Vb2;
	assign Vc2_temp=Vc2;
//	assign Vaf_temp=Va_filtered;
//	assign Vbf_temp=Vb_filtered;
//	assign Vcf_temp=Vc_filtered;
	
	// num=Fs*100/N where Fs=8000 
	assign num = 25000; 
	assign den = Vref_freq;
	assign r = num - k2*den;
   
	assign k = (Vref_freq>0) ? ( (r > (den/2))? k2[7:0]+1:k2[7:0]): 1;
	
	division #(.WIDTH(24)) div(num,den,k2);
	
	
	CLOCK Iclk( .clk_100m(clk_100m), .clk_20k(clk_20k), .clk_40k(clk_40k), .clk_80k(clk_80k),.clk_400k(clk_400k),
	            .clk_100(clk_100), .clk_8k(clk_8k), .clk_800hz(clk_800hz), .clk_16k(clk_16k) );	
		
	// ADC _read_____ 2 channel(A   and B)
	adcread Iadc ( .clk(clk_400k), .SPI_MOSI(SPI_MOSI), .AMP_CS(AMP_CS), .SPI_SCK(SPI_SCK), .AMP_SHDN(AMP_SHDN), .AD_CONV(AD_CONV),
						.SPI_MISO(SPI_MISO), .ADC_A(Va), .ADC_B(Vb),.tick(tick1) );
						
	///ADC _read_____ 2 channel(C   and D)
	adcread Iadc2 ( .clk(clk_400k), .SPI_MOSI(SPI_MOSI_B2), .AMP_CS(AMP_CS_B2), .SPI_SCK(SPI_SCK_B2), .AMP_SHDN(AMP_SHDN_B2),
						.AD_CONV(AD_CONV_B2), .SPI_MISO(SPI_MISO_B2), .ADC_A(Vc), .ADC_B(Vd), .tick(tick2));
	
	
	ADS_module m0(clk_16k,1,sample_clk);
	
	DC_offset_removal i1(sample_clk,rst,Va,Va2);
	
	DC_offset_removal i2(sample_clk,rst,Vb,Vb2);
	
	DC_offset_removal i3(sample_clk,rst,Vc,Vc2);
	
	FREQ_measure m2(sample_clk,rst,Va2,8'd1,Vref_freq);
	
	ADS_module m3(clk_16k,k,dclk);
	
//	FIR_filter m4(dclk,rst,Va2,Va_filtered);
//	
//	FIR_filter m5(dclk,rst,Vb2,Vb_filtered);
//	
//	FIR_filter m6(dclk,rst,Vc2,Vc_filtered);
	
	SCE_module m7(dclk,rst,Va2,Vb2,Vc2,Vzero,Vpos,Vneg);
	
	DZCPD_module m8(dclk,rst,Va2,Vpos,k,Vpos_freq,Vpos_amp,Vpos_phase);

	DZCPD_module m9(dclk,rst,Va2,Vneg,k,Vneg_freq,Vneg_amp,Vneg_phase);
	
	DZCPD_module m10(dclk,rst,Va2,Vzero,k,Vzero_freq,Vzero_amp,Vzero_phase);
	
	


endmodule


