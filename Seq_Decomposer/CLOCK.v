`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:01:25 03/07/2018 
// Design Name: 
// Module Name:    CLOCK 
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
/// clock _ module 
module CLOCK( clk_100m, clk_20k, clk_40k, clk_80k,clk_400k, clk_100, clk_8k, clk_800hz, clk_16k );
input clk_100m;
output reg clk_20k = 1'b0;////for 8_sample
output reg clk_40k = 1'b0;////for 16_sample
output reg clk_80k = 1'b0;////for 32_sample
output reg clk_400k = 1'b0;////for 160_sample

output reg clk_100 = 1'b0;////
output reg clk_8k = 1'b0;////
output reg clk_800hz = 1'b0;////
output reg clk_16k = 1'b0;////

integer COUNTER1 = 0;
integer COUNTER2 = 0;
integer COUNTER3 = 0;
integer COUNTER4 = 0;
integer COUNTER12 = 0;
integer COUNTER13 = 0;
integer COUNTER14 = 0;
integer COUNTER15 = 0;
always @(posedge clk_100m)
begin
    if(COUNTER1 >=2500 )//// 20k hz sample frequency_______8__sample
    begin
        clk_20k = ~clk_20k;
        COUNTER1 = 0;
    end
    COUNTER1 = COUNTER1 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER2 >= 1250)//// 40k hz sample frequency---------16__sample
    begin
        clk_40k = ~clk_40k;
        COUNTER2 = 0;
    end
    COUNTER2 = COUNTER2 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER3 >= 625)//// 80k hz sample frequency---------32__sample
    begin
        clk_80k = ~clk_80k;
        COUNTER3 = 0;
    end
    COUNTER3 = COUNTER3 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER4 >= 125)//// 400k hz sample frequency---------160__sample
    begin
        clk_400k = ~clk_400k;
        COUNTER4 = 0;
    end
    COUNTER4 = COUNTER4 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER12 >= 500000)//// 100 hz for dac_test
    begin
        clk_100 = ~clk_100;
        COUNTER12 = 0;
    end
    COUNTER12 = COUNTER12 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER13 >= 6250)//// clk_8k for dac_test
    begin
        clk_8k = ~clk_8k;
        COUNTER13 = 0;
    end
    COUNTER13 = COUNTER13 + 1;
end

always @(posedge clk_100m)
begin
    if(COUNTER14 >= 62500)//// clk_800hz for dac_test
    begin
        clk_800hz = ~clk_800hz;
        COUNTER14 = 0;
    end
    COUNTER14 = COUNTER14 + 1;
end


always @(posedge clk_100m)
begin
    if(COUNTER15 >= 3125)//// 16k
    begin
        clk_16k = ~clk_16k;
        COUNTER15 = 0;
    end
    COUNTER15 = COUNTER15 + 1;
end

endmodule
