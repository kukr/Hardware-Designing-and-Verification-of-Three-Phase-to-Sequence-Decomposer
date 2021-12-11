//ADC program	
module adcread (clk, SPI_MOSI, AMP_CS, SPI_SCK, AMP_SHDN, AD_CONV, SPI_MISO, ADC_A, ADC_B);

input clk;
input SPI_MISO;

output reg SPI_MOSI;
output reg AMP_CS;
output SPI_SCK;
output AMP_SHDN;
output reg AD_CONV;
output [13:0] ADC_A;
output [13:0] ADC_B;

reg [13:0] ADC_A;
reg [13:0] ADC_B;

reg [7:0] GAIN_AB=8'b00010001;
reg [7:0] COUNTER=0;
reg STOP_CLK = 0;

assign AMP_SHDN = 1'b0;
assign SPI_SCK=STOP_CLK?0:clk;

always @(negedge clk)
begin
    case(COUNTER)
        1: begin AMP_CS=0; SPI_MOSI = GAIN_AB[7]; end
        2: SPI_MOSI = GAIN_AB[6];
        3: SPI_MOSI = GAIN_AB[5];
        4: SPI_MOSI = GAIN_AB[4];
        5: SPI_MOSI = GAIN_AB[3];
        6: SPI_MOSI = GAIN_AB[2];
        7: SPI_MOSI = GAIN_AB[1];
        8: SPI_MOSI = GAIN_AB[0];
        9: AMP_CS = 1;
		  
        10:STOP_CLK = 1'b1;                         // Clock is stopped
        20:AD_CONV = 1'b1;
        22:AD_CONV = 1'b0;
        23:STOP_CLK = 1'b0;                         // Clock is allowed to pass
    endcase
end

always @(posedge clk)
begin
    COUNTER = COUNTER + 1;
    if(COUNTER >= 60)
        COUNTER = 10;
end

always @(negedge clk)
begin
    if(COUNTER > 25)
    begin
        case(COUNTER)
        26: ADC_A[13]=SPI_MISO;
        27: ADC_A[12]=SPI_MISO;
        28: ADC_A[11]=SPI_MISO;
        29: ADC_A[10]=SPI_MISO;
        30: ADC_A[9]=SPI_MISO;
        31: ADC_A[8]=SPI_MISO;
        32: ADC_A[7]=SPI_MISO;
        33: ADC_A[6]=SPI_MISO;
        34: ADC_A[5]=SPI_MISO;
        35: ADC_A[4]=SPI_MISO;
        36: ADC_A[3]=SPI_MISO;
        37: ADC_A[2]=SPI_MISO;
        38: ADC_A[1]=SPI_MISO;
        39: begin
					ADC_A[0]=SPI_MISO;
				end
				
        42: ADC_B[13]=SPI_MISO;
        43: ADC_B[12]=SPI_MISO;
        44: ADC_B[11]=SPI_MISO;
        45: ADC_B[10]=SPI_MISO;
        46: ADC_B[9]=SPI_MISO;
        47: ADC_B[8]=SPI_MISO;
        48: ADC_B[7]=SPI_MISO;
        49: ADC_B[6]=SPI_MISO;
        50: ADC_B[5]=SPI_MISO;
        51: ADC_B[4]=SPI_MISO;
        52: ADC_B[3]=SPI_MISO;
        53: ADC_B[2]=SPI_MISO;
		  54: ADC_B[1]=SPI_MISO;
        55: begin
				 ADC_B[0]=SPI_MISO;			 
             end		    		  
        endcase
    end
end

endmodule
