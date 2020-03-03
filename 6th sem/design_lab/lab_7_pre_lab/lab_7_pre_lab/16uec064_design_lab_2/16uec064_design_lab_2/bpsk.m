clc;
clear all;
close all;


%%%%%%%%%%%%%   for  8 bit     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



N = 100000;
x = randi([0,1],1,N);

% convert to bpsk
for i = 1:N 
    if(x(i)==0)
        t(i) = -1;
    else
        t(i)= x(i);
    end
end

h = round(((randn(1,N) + 1i*randn(1,N))*sqrt(1/2))*(2^8));  %h complex random ; ray light faded channel
n = round((randn(1,N))*(2^8));                    % noise genrated

snr_db = 0:4:24;
kk =0;




ber_prac = zeros(1, length(snr_db));

for k = 1: length(snr_db)
    
snr_linear(k) = 10.^(snr_db(k)/10);           % converted snr to linear
sigma(k) = 1./(snr_linear(k)).^(1/2);                % find sigma

y = round((h.*t + sigma(k).*n)*(2^8));                 % find y = channel*bpsk_signal + sigma*noise


% convert y sequence into bpsk take threshold value = 0
% z is your constructed signal
% y is output signal with noise
%bpsk wireless communication
z = ceil((y./h)*(2^8));


for i = 1:N
    if(z(i)>0)
        r(i)=1;
    else
        r(i)=-1;
    end
end

ber_th(k) = (1/2)*(1-(snr_linear(k)/(1+snr_linear(k))).^(1/2));

% check bit by bit that r and z is same or not


count_error(k)=0;
for jj=1:N
    if(t(jj)~=r(jj))
        count_error(k)=count_error(k)+1;
%     else
%         count_error;
    end
end
end

ber_prac  = count_error./N;
semilogy(snr_db,ber_prac);
grid on;
hold on;
semilogy(snr_db,ber_th);
title("ber_th vs ber_prac");
xlabel("snr in db 8 bit integer");





%%%%%%%%%%%%%   for  4 bit     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

figure;





N1 = 100000;
x1 = randi([0,1],1,N1);

% convert to bpsk
for i = 1:N1 
    if(x1(i)==0)
        t1(i) = -1;
    else
        t1(i)= x1(i);
    end
end

h1 = round(((randn(1,N1) + 1i*randn(1,N1))*sqrt(1/2))*(2^4));  %h complex random ; ray light faded channel
n1 = round((randn(1,N1))*(2^4));                    % noise genrated

snr_db1 = 0:4:24;
kk1 =0;




ber_prac1 = zeros(1, length(snr_db1));

for k = 1: length(snr_db1)
    
snr_linear1(k) = 10.^(snr_db1(k)/10);           % converted snr to linear
sigma1(k) = 1./(snr_linear1(k)).^(1/2);                % find sigma

y1 = round((h1.*t1 + sigma1(k).*n1)*(2^4));                 % find y = channel*bpsk_signal + sigma*noise


% convert y sequence into bpsk take threshold value = 0
% z is your constructed signal
% y is output signal with noise
%bpsk wireless communication
z1 = ceil((y1./h1)*(2^4));


for i = 1:N1
    if(z1(i)>0)
        r1(i)=1;
    else
        r1(i)=-1;
    end
end

ber_th1(k) = (1/2)*(1-(snr_linear1(k)/(1+snr_linear1(k))).^(1/2));

% check bit by bit that r and z is same or not


count_error1(k)=0;
for jj=1:N1
    if(t1(jj)~=r1(jj))
        count_error1(k)=count_error1(k)+1;
%     else
%         count_error;
    end
end
end

ber_prac1  = count_error1./N1;
semilogy(snr_db1,ber_prac1);
grid on;
hold on;
semilogy(snr_db1,ber_th1);
title("ber_th1 vs ber_prac1");
xlabel("snr in db1 4 bit integer");


%%%%%%%%%%%%%   for  16 bit     %%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
figure;





N2 = 100000;
x2 = randi([0,1],1,N2);

% convert to bpsk
for i = 1:N2 
    if(x2(i)==0)
        t2(i) = -1;
    else
        t2(i)= x2(i);
    end
end

h2 = round(((randn(1,N2) + 1i*randn(1,N2))*sqrt(1/2))*(2^16));  %h complex random ; ray light faded channel
n2 = round((randn(1,N2))*(2^16));                    % noise genrated

snr_db2 = 0:4:24;
kk2 =0;




ber_prac2 = zeros(1, length(snr_db2));

for k = 1: length(snr_db2)
    
snr_linear2(k) = 10.^(snr_db2(k)/10);           % converted snr to linear
sigma2(k) = 1./(snr_linear2(k)).^(1/2);                % find sigma

y2 = round((h2.*t2 + sigma2(k).*n2)*(2^16));                 % find y = channel*bpsk_signal + sigma*noise


% convert y sequence into bpsk take threshold value = 0
% z is your constructed signal
% y is output signal with noise
%bpsk wireless communication
z2 = ceil((y2./h2)*(2^16));


for i = 1:N2
    if(z2(i)>0)
        r2(i)=1;
    else
        r2(i)=-1;
    end
end

ber_th2(k) = (1/2)*(1-(snr_linear2(k)/(1+snr_linear2(k))).^(1/2));

% check bit by bit that r and z is same or not


count_error2(k)=0;
for jj=1:N2
    if(t2(jj)~=r2(jj))
        count_error2(k)=count_error2(k)+1;
%     else
%         count_error;
    end
end
end

ber_prac2  = count_error2./N2;
semilogy(snr_db2,ber_prac2);
grid on;
hold on;
semilogy(snr_db2,ber_th2);
title("ber_th2 vs ber_prac2");
xlabel("snr in db2 16 bit integer");