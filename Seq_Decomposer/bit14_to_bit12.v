`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:54 03/07/2018 
// Design Name: 
// Module Name:    bit14_to_bit12 
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
module bit14_to_bit12(input [13:0] data14, output reg [11:0] data12 );
	always @(data14) begin
		if(data14[13]==0)
			begin
				data12=(data14)<<2;
			end
	    else
			begin
				data12=(~data14+1'b1)<<2;
			end
	end

endmodule