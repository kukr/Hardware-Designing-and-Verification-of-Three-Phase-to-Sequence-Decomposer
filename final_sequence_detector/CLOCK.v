
/// clock _ module 
module CLOCK( clk_100m, clk_20k, clk_40k, clk_80k,clk_400k );
input clk_100m;
output reg clk_20k = 1'b0;////for 8_sample
output reg clk_40k = 1'b0;////for 16_sample
output reg clk_80k = 1'b0;////for 32_sample
output reg clk_400k = 1'b0;////for 32_sample
integer COUNTER1 = 0;
integer COUNTER2 = 0;
integer COUNTER3 = 0;
integer COUNTER4 = 0;

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
    if(COUNTER3 >= 125)//// 400k hz sample frequency---------160__sample
    begin
        clk_400k = ~clk_400k;
        COUNTER4 = 0;
    end
    COUNTER4 = COUNTER4 + 1;
end

endmodule
