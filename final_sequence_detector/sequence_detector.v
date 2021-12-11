`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:50 11/08/2017 
// Design Name: 
// Module Name:    seq_decomposer 
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
module SEQ_DECOMPOSER #(parameter M=14)(
	input clk,
	input rst,
	input sw,
	
	output reg [7:0] LED,
//	input signed [M-1:0] Va,
//	input signed [M-1:0] Vb,
//	input signed [M-1:0] Vc,
//	output dclk,
//	output [7:0] k,
//	output signed [M-1:0] Vpos,
//	output [15:0] Vref_freq,
//	output [M-1:0] Vzero_amp,
//	output [15:0] Vzero_freq,
//	output [15:0] Vzero_phase,
//		output [M-1:0] Vpos_amp,
//		output [15:0] Vpos_freq,
//		output [15:0] Vpos_phase,
//	output [M-1:0] Vneg_amp,
//	output [15:0] Vneg_freq,
//	output [15:0] Vneg_phase,
	
////-------------------------BOARD___A
//input AMP_DOUT;
//Pre Amplifier Interface
     output SPI_MOSI,
     output AMP_CS,
     output SPI_SCK,
     output AMP_SHDN,
// The ADC interface
     output AD_CONV,
     input SPI_MISO,
//-----------------------------------------------
////-------------------------BOARD___B
//input AMP_DOUT;
//Pre Amplifier Interface
     output SPI_MOSI_B2,
     output AMP_CS_B2,
     output SPI_SCK_B2,
     output AMP_SHDN_B2,
// The ADC interface
     output AD_CONV_B2,
     input SPI_MISO_B2
  );
	 
	 
	 
wire [13:0] adc_in_A;
wire [13:0] adc_in_B;
wire [13:0] adc_in_C;
wire [13:0] adc_in_D;
wire [7:0] k;
wire dclk;

	wire [M-1:0] Vpos_amp;
	wire [15:0] Vpos_freq;
	wire [15:0] Vpos_phase;
	wire signed [M-1:0] Vpos;
	wire [15:0] Vref_freq;

wire clk_20k;
wire clk_40k;
wire clk_80k;
wire clk_400k;

	wire signed [M-1:0] Vzero;
	//wire signed [M-1:0] Vpos,
	wire signed [M-1:0] Vneg;
	 
	// actual_delay between samples = 1/Fs = 2000ns
	// simulation_delay between samples = 1ns
	// so time_multiplier = actual_delay/simulation_delay
	// clk_div_factor is 1/(time measurement unit) i.e. for ns we have 1/10e-9 = 10e9
	
	reg [15:0] Fs=8000; 
	reg [7:0] N=32;
	//parameter [31:0] clk_div_factor=10**9;
	//wire [15:0] time_multiplier; //to be removed
	reg [M-1:0] Vref_offset=0;
	wire [15:0] Vref_freq2;
	wire [23:0] k2,num,den;
	
	assign num=Fs*(8'd100);
	assign den=Vref_freq*N;
	division #(.WIDTH(16)) div1(Vref_freq,16'd100,Vref_freq2);
	
	division #(.WIDTH(24)) div2(num,den,k2);
	
   assign k = (Vref_freq2 >0) ? k2[7:0] : 1;
/// led	
always @(posedge clk)
begin
	if(sw == 1'b1)
		begin
			//LED = ADC_A[13:8];
			LED <= {2'b00,Vpos_amp[13:8]};
		end
	else
		begin
			//LED = ADC_A[7:0];
			LED <= Vpos_amp[7:0];
		end
end
	

CLOCK Iclk( .clk_100m(clk), .clk_20k(clk_20k), .clk_40k(clk_40k), .clk_80k(clk_80k),.clk_400k(clk_400k) );	
	
// ADC _read_____ 2 channel(A   and B)
adcread Iadc ( .clk(clk_400k), .SPI_MOSI(SPI_MOSI), .AMP_CS(AMP_CS), .SPI_SCK(SPI_SCK), .AMP_SHDN(AMP_SHDN), .AD_CONV(AD_CONV),
               .SPI_MISO(SPI_MISO), .ADC_A(adc_in_A), .ADC_B(adc_in_B) );
					
///ADC _read_____ 2 channel(C   and D)
adcread Iadc2 ( .clk(clk_400k), .SPI_MOSI(SPI_MOSI_B2), .AMP_CS(AMP_CS_B2), .SPI_SCK(SPI_SCK_B2), .AMP_SHDN(AMP_SHDN_B2),
               .AD_CONV(AD_CONV_B2), .SPI_MISO(SPI_MISO_B2), .ADC_A(adc_in_C), .ADC_B(adc_in_D));
	
	
FREQ_measure m1(clk,rst,adc_in_A,Vref_offset,8'd1,Vref_freq);
	
	
	ADS_module m2(clk,k,dclk);
	
	SCE_module m3(dclk,rst,adc_in_A,adc_in_B,adc_in_C,Vzero,Vpos,Vneg);
	
	DZCPD_module m4(dclk,rst,adc_in_A,Vpos,Vref_offset,Vref_freq,k-1,Vpos_freq,Vpos_amp,Vpos_phase);
	
	//DZCPD_module m5(dclk,rst,.Va(adc_in_A),Vneg,Vref_offset,Vref_freq,k-1,Vneg_freq,Vneg_amp,Vneg_phase);
	
	//DZCPD_module m6(dclk,rst,.Va(adc_in_A),Vzero,Vref_offset,Vref_freq,k-1,Vzero_freq,Vzero_amp,Vzero_phase);
	
	
	//	always @(posedge dclk, posedge rst)
//	begin
//		$display("num=%d",num);
//		$display("den=%d",den);
//		$display("k2=%d",k2);
//	end
endmodule
