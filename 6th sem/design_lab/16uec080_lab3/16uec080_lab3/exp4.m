clc;
clear all;
close all;

N = 100000;
X = randi([0,1],[1,N]);
L = 3;

t = 1;
for i = 1:2:N
    if (X(i) == 0) && (X(i+1) == 0)
        qpsk(t) = (1+1j)/sqrt(2);
    elseif (X(i) == 0) && (X(i+1) == 1)
        qpsk(t) = (-1+1j)/sqrt(2);
    elseif (X(i) == 1) && (X(i+1) == 0)
        qpsk(t) = (-1-1j)/sqrt(2);
    elseif (X(i) == 1) && (X(i+1) == 1)
        qpsk(t) = (1-1j)/sqrt(2);
    end
    t = t+1;
end

for j = 1:L
    h(j,:) = (1/sqrt(2)).*(complex(randn(1,N/2),randn(1,N/2)));
    n(j,:) = complex(randn(1,N/2),randn(1,N/2));
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
        y(j,:) = h(j,:).*qpsk + sigma(i).*n(j,:);
    end
    Dec = 0;
    for k = 1:L
        a = conj(h(k,:)).*y(k,:);
        Dec = Dec + a;
    end
    Dec = Dec./normsq_h;
    n = 1;
    for j = 1:N/2
        if (real(Dec(j))>0) && (imag(Dec(j))>0)
            X_rcvd(n) = 0;
            X_rcvd(n+1) = 0;
        elseif (real(Dec(j))<0) && (imag(Dec(j))>0)
            X_rcvd(n) = 0;
            X_rcvd(n+1) = 1;
        elseif (real(Dec(j))<0) && (imag(Dec(j))<0)
            X_rcvd(n) = 1;
            X_rcvd(n+1) = 0;
        elseif (real(Dec(j))>0) && (imag(Dec(j))<0)
            X_rcvd(n) = 1;
            X_rcvd(n+1) = 1;
        end
        n = n+2;
    end
    e(i) = sum(abs(X-X_rcvd))./N;
    P(i) = nchoosek(2*L-1,L)*(power(1/(2*SNR_lin(i)),L));
 end

semilogy(SNR_dB,e,'-*');
hold on
semilogy(SNR_dB,P,'-o');
xlabel('SNR');ylabel('Error');
title('SNR vs ERROR');
legend('prac','theo');