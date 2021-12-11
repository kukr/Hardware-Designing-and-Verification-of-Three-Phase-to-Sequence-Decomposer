`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:37:00 03/07/2018 
// Design Name: 
// Module Name:    adcdac_comb 
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
module adcdac_comb(clk, rst, SPI_MISO, SPI_MOSI, AMP_CS, SPI_SCK, DAC_CS, DAC_CLR);
	 
	input clk;
	input rst;
	output SPI_MISO;
	output SPI_MOSI;
	output AMP_CS;
	output SPI_SCK;
	output reg DAC_CS;
	output reg DAC_CLR;
	 
	reg sce_enable=0;
	
	// ADC signals
	reg adc_enable=0;
	wire adc_done_B1;
	wire adc_done_B2;
	
	wire [13:0] adc_in_A;
	wire [13:0] adc_in_B;
	
	// DAC signals
	reg dac_enable=0;
	wire dac_done;
	reg [11:0] datain;
	reg [3:0] address;
	
	wire sce_active;
	
	wire clk_20k;
	wire clk_40k;
	wire clk_80k;
	wire clk_400k;


	reg [3:0] idle=2'b00, adc_active=2'b01, dac_active=2'b11;
	reg [3:0] state,next_state;
	
	CLOCK Imainclock ( .clk_100m(clk), .clk_20k(clk_20k), .clk_40k(clk_40k), .clk_80k(clk_80k), .clk_400k(clk_400k));
	
	adcread Iadc(clk,reset, adc_enable, adc_done, SPI_MOSI, AMP_CS, 
						SPI_SCK, AMP_SHDN, AD_CONV, SPI_MISO, adc_in_A, adc_in_B);
	
	dacwrite Idac(clk, reset, dac_enable, dac_done, datain, address, AD_CONV, SPI_MOSI, SPI_MISO, DAC_SC, SPI_SCK, DAC_CLR);

	always @(posedge clk or posedge rst)
		begin
			case(state)
				idle: begin
						adc_enable=0;
						dac_enable=0;
						sce_enable=0;
						if(rst)
							next_state=idle;
						else
							next_state=adc_active;
						end
				adc_active:
						begin
						adc_enable=1;
						dac_enable=0;
						sce_enable=0;
						if(adc_done_B1 & adc_done_B2)
							next_state=sce_active;
						else
							next_state=adc_active;
						end
				dac_active:
						begin
						adc_enable=0;
						dac_enable=1;
						sce_enable=0;
						datain={~adc_in_A[13],adc_in_A[12:2]};
						address=4'b0000;
						if(dac_done)
							next_state=adc_active;
						else
							next_state=dac_active;
						end
			endcase
			state=next_state;
		end
		
	
	

endmodule
