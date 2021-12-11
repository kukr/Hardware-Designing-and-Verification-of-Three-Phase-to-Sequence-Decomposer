clc;
close all;
% N=32;

fin = 50;
fs = 8000;
t =0:1/fs:0.4;
ph=0;
for ph=0:30:350
    Input = sin((2*pi*fin*t)+ph*(pi/180))+0.2*sin(2*(2*pi*fin*t+ph*(pi/180)));
    plot(Input)
    quant=1.2/(2^13-1);
    y=round(Input/quant);
    out=dec2tc(y,14);
    plot(y);
    fileID = fopen(strcat('adc_samples/harmonics_3rd_20_p',num2str(ph),'.txt'),'w');
    [n,m]=size(out);
    for i=1:n-1
        fprintf(fileID, '%s\n', out(i,:));
    end
    fclose(fileID);
end


