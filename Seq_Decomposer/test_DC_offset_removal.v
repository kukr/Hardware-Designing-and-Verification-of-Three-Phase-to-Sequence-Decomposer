`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:43 04/12/2018
// Design Name:   DC_offset_removal
// Module Name:   F:/BTP/codes/Seq_Decomposer/test_DC_offset_removal.v
// Project Name:  SEQ_DECOMPOSER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DC_offset_removal
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_DC_offset_removal;

	// Inputs
	reg clk;
	reg rst;
	reg [13:0] Vin;

	// Outputs
	wire [13:0] Vout;
		
	reg signed [13:0] V1;
	integer Va_file,temp1;

	// Instantiate the Unit Under Test (UUT)
	DC_offset_removal uut (
		.clk(clk), 
		.rst(rst), 
		.Vin(Vin), 
		.Vout(Vout)
	);
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		Va_file=$fopen("adc_samples/adc_data_v8kf50.txt","r");
		
		#10;
		rst=0;
	end
	
	always @(posedge clk)
		begin
		temp1=$fscanf(Va_file, "%b\n", V1);
		if (!$feof(Va_file)) 
		  begin
			  Vin<=V1;
		  end
		else $finish;
		end
	
	always #0.5 clk=~clk;
      
endmodule

