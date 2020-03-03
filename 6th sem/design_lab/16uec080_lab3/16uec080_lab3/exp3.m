clc;
clear all;
close all;

N = 100000;
X = randi([0,1],[1,N]);
L = 5;

for i = 1:N
    if X(i) == 0
        bpsk(i) = -1;
    else
        bpsk(i) = 1;
    end
end

for j = 1:L
    h(j,:) = (1/sqrt(2)).*(complex(randn(1,N),randn(1,N)));
    n(j,:) = complex(randn(1,N),randn(1,N));
end
normsq_h = 0;
for j = 1:L
    a = h(j,:).*conj(h(j,:));
    normsq_h = normsq_h + a;
end

SNR_dB = 0:4:24;
l = length(SNR_dB);

for i = 1:l
    SNR_lin(i) = 10^(SNR_dB(i)/10);
    sigma(i) = 1/sqrt(SNR_lin(i));
    for j = 1:L
        y(j,:) = h(j,:).*bpsk + sigma(i)*n(j,:);
    end
    Dec = 0;
    for k = 1:L
        a = conj(h(k,:)).*y(k,:);
        Dec = Dec + a;
    end
    Dec1 = Dec./normsq_h;
    for t = 1:N
        if Dec1(t) > 0
            X_rcvd(t) = 1;
        else
            X_rcvd(t) = 0;
        end
    end
    e(i) = sum(abs(X-X_rcvd))/N;
    P(i) = nchoosek(2*L-1,L)*(power(1/(2*SNR_lin(i)),L));
 end

semilogy(SNR_dB,e);
hold on
semilogy(SNR_dB,P);
xlabel('SNR');ylabel('Error');
title('SNR vs ERROR');
legend('prac','theo');