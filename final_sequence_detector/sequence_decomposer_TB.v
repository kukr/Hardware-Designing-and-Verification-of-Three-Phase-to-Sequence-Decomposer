`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:29:29 11/12/2017
// Design Name:   SEQ_DECOMPOSER
// Module Name:   F:/BTP/Seq_Decomposer/test_SEQ_DECOMPOSER2.v
// Project Name:  Seq_Decomposer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SEQ_DECOMPOSER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_SEQ_DECOMPOSER;

	// Inputs
	reg clk;
	reg rst;
	reg signed [13:0] Va;
	reg signed [13:0] Vb;
	reg signed [13:0] Vc;

	// Outputs
	wire dclk;
	wire [7:0] k;
	wire signed [13:0] Vzero;
	wire signed [13:0] Vpos;
	wire signed [13:0] Vneg;
	wire [15:0] Vref_freq;
	wire [13:0] Vzero_amp;
	wire [15:0] Vzero_freq;
	wire [15:0] Vzero_phase;
	wire [13:0] Vpos_amp;
	wire [15:0] Vpos_freq;
	wire [15:0] Vpos_phase;
	wire [13:0] Vneg_amp;
	wire [15:0] Vneg_freq;
	wire [15:0] Vneg_phase;
	
	reg signed [13:0] V1,V2,V3;
	integer Va_file, Vb_file, Vc_file,temp1,temp2,temp3;

	// Instantiate the Unit Under Test (UUT)
	SEQ_DECOMPOSER uut (
		.clk(clk), 
		.rst(rst), 
		.Va(Va), 
		.Vb(Vb), 
		.Vc(Vc), 
		.dclk(dclk), 
		.k(k),  
		.Vzero(Vzero), 
		.Vpos(Vpos), 
		.Vneg(Vneg),
		.Vref_freq(Vref_freq), 
		.Vzero_amp(Vzero_amp), 
		.Vzero_freq(Vzero_freq), 
		.Vzero_phase(Vzero_phase), 
		.Vpos_amp(Vpos_amp), 
		.Vpos_freq(Vpos_freq), 
		.Vpos_phase(Vpos_phase), 
		.Vneg_amp(Vneg_amp), 
		.Vneg_freq(Vneg_freq), 
		.Vneg_phase(Vneg_phase)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		Va = 0;
		Vb = 0;
		Vc = 0;

		Va_file=$fopen("adc_samples/v8000f50p0.txt","r");
		Vb_file=$fopen("adc_samples/v8000f50p240.txt","r");
		Vc_file=$fopen("adc_samples/v8000f50p120.txt","r");
		
		#10;
		rst=0;
	end
	
	always @(posedge clk)
		begin
		temp1=$fscanf(Va_file, "%b\n", V1);
		temp2=$fscanf(Vb_file, "%b\n", V2);
		temp3=$fscanf(Vc_file, "%b\n", V3);
		//$display("V1=%d, V2=%d, V3=%d",V1,V2,V3);
		if (!$feof(Va_file) && !$feof(Vb_file) && !$feof(Vc_file)) 
		  begin
			  Va<=V1;
			  Vb<=V2;
			  Vc<=V3;
			 //use captured_data as you would any other wire or reg value;
		  end
		else $finish;
		end
	
	always #0.5 clk=~clk;
	
	
	
	always @(posedge dclk) 
	$display(
	$time, "\
	k=%d\
	Va=%d, Vb=%d, Vc=%d \
	Vzero=%d, Vpos=%d, Vneg=%d\
	Vref_freq=%d\
	Vzero_freq=%d, Vzero_amp=%d, Vzero_phase=%d\
	Vpos_freq=%d, Vpos_amp=%d, Vpos_phase=%d\
	Vneg_freq=%d, Vneg_amp=%d, Vneg_phase=%d",
	k,Va,Vb,Vc,
	Vzero,Vpos,Vneg,
	Vref_freq,
	Vzero_freq,Vzero_amp,Vzero_phase,
	Vpos_freq,Vpos_amp,Vpos_phase,
	Vneg_freq,Vneg_amp,Vneg_phase
	);
	    
endmodule

