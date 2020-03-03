%%%%%%%%%%%%%%% C Based S Function %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%% This program shows how 'mex' is used for c program Compilation%%%%
%%%%%%%% Simulink model for BER performance of AWGN channel %%%%%%%%%%%%%%% 
%%%%%%%%%%% Prepared By D.Rawal, 01/01/2018 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc;      
clear all;
close all;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
mex CppSwired.cpp wired.cpp

avg = 10;
snr = 1;
for i = 1:10
    snr = snr + 1;
    sn(i) = snr;
    sim('Wired_BER');
    error(i) = err(avg,1);
    errmfile(i) = err_mfile(avg,1);

end

semilogy(sn,error,'-+',sn,errmfile,'o-');
legend('sfuncdet','sfunc');
title('wiredch');
xlabel('SNR');
ylabel('BER');
grid on;

