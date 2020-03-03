clc;
clear all;
close all;

N = 100000;
X = randi([0,1],[1,N]);
L = 2;

for i = 1:N
    if X(i) == 0
        bpsk(i) = -1;
    else
        bpsk(i) = 1;
    end
end

h1 = (1/sqrt(2)).*complex(randn(1,N),randn(1,N));
h2 = (1/sqrt(2)).*complex(randn(1,N),randn(1,N));
n1 = complex(randn(1,N),randn(1,N));
n2 = complex(randn(1,N),randn(1,N));
normsq_h = h1.*conj(h1) + h2.*conj(h2);

SNR_dB = 0:4:24;
l = length(SNR_dB);

for i = 1:l
    SNR_lin(i) = 10^(SNR_dB(i)/10);
    sigma(i) = 1/sqrt(SNR_lin(i));
    y1 = h1.*bpsk + sigma(i)*n1;
    y2 = h2.*bpsk + sigma(i)*n2;
    Dec = ((conj(h1).*y1)+(conj(h2).*y2))./normsq_h;
    for j = 1:N
        if Dec(j) > 0
            X_rcvd(j) = 1;
        else
            X_rcvd(j) = 0;
        end
    end
    e(i) = sum(abs(X-X_rcvd))/N;
    P(i) = nchoosek(2*L-1,L)*(power(1/(2*SNR_lin(i)),L));
end

semilogy(SNR_dB,e);
hold on
semilogy(SNR_dB,P);
xlabel('SNR');ylabel('Error');
%title('SNR vs ERROR');
legend('prac','theo');