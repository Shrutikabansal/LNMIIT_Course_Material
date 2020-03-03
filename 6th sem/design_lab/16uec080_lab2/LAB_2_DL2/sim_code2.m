clc;
close all;
clear all;

SNR_dB = 0:4:24;
for i = 1:length(SNR_dB)
    snr = SNR_dB(i);
    sim('lab2_sim_2.slx');
    err(i) = simout;
end

semilogy(SNR_dB,err);