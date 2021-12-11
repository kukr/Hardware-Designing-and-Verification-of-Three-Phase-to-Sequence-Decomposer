`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:59:36 11/13/2017
// Design Name:   module_fir
// Module Name:   C:/Users/shubh/Google Drive/Cirriculum4_1/BTP/FIR/fir_filter/tst.v
// Project Name:  fir_filter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: module_fir
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tst;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] x;

	// Outputs
	wire [15:0] dataout;

	// Instantiate the Unit Under Test (UUT)
	module_fir uut (
		.clk(clk), 
		.rst(rst), 
		.x(x), 
		.dataout(dataout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		rst = 1;
		#10;

		rst = 0;
		x = 0;
		/*
		x = 8'd5;
		#10;
		x = 8'd10;
		#10;
		x = 8'd12;
		#10;
		x = 8'd15;
		#10;
		x = 8'd16;
		#10;
		x = 8'd17;
		#10;
		x = 8'd18;
		#10;
		x = 8'd1;
		#10;
		x = 8'd90;
		#10;
		x = 8'd31;
		*/
        
		// Add stimulus here

	end
	
	always begin #5 clk=~clk;
	x = x+1;
	end
	
      
endmodule

