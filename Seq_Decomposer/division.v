`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:39 12/21/2017 
// Design Name: 
// Module Name:    division
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

module division #(parameter WIDTH = 16)(A,B,Res);
    //the size of input and output ports of the division module is generic.
    
    //input and output ports.
    input signed [WIDTH-1:0] A;
    input signed [WIDTH-1:0] B;
    output signed [WIDTH-1:0] Res;     /////// output
    //internal variables    
    reg [WIDTH-1:0] Res = 0;
    reg [WIDTH-1:0] a1,b1;
    reg [WIDTH:0] p1;   
    integer i;

    always@ (A or B)
    begin
        //initialize the variables.
        a1 = A>0?A:~A+1'b1;
        b1 = B;
        p1= 0;
        for(i=0;i < WIDTH;i=i+1)    
				begin //start the for loop
            p1 = {p1[WIDTH-2:0],a1[WIDTH-1]};
            a1[WIDTH-1:1] = a1[WIDTH-2:0];
            p1 = p1-b1;
            if(p1[WIDTH-1] == 1)    begin
                a1[0] = 0;
                p1 = p1 + b1;   end
            else
                a1[0] = 1;
        end
        Res = A>0?a1:~a1+1'b1;   
    end 

endmodule

