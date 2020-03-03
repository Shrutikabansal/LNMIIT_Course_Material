clc;
close all;
clear all;

SNR_dB = 0:4:24;
for i = 1:length(SNR_dB)
    snr = SNR_dB(i);
    sim('bpsk_sim.slx');
    err(i) = simout;
end

semilogy(SNR_dB,err);