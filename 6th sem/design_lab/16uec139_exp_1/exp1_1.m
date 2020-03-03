x = randi([0 1], 10000, 1);
y = zeros(10000, 1);
for i=1:length(x)
    if x(i) == 0
        y(i) = -1;
    else
        y(i) = 1;
    end
end

awgn = randn(10000, 1);
snrdb = 0:24;
snr = 0:24;
err = 0:24;
err2 = 0:24;
err_rate = 0:24;
err_theo = 0:24;
for j = 1:length(snrdb)
    snr(j) = 10^(snrdb(j)/10);
    sigma = 1/sqrt(snr(j));
    signal_power = 1;
    noise_power = sigma^2;
    yr = y + sigma*awgn;
    for i=1:length(yr)
        if yr(i) > 0
            yr(i) = 1;
        else
            yr(i) = 0;
        end
    end
    err(j) = mse(x, yr);
    err2(j) = sum(abs(x - yr));
    err_rate(j) = err2(j)/10000;
    err_theo(j) = qfunc(sqrt(snr(j)));
end
semilogy(snrdb, err);
hold on;
semilogy(snrdb, err_theo, '--');
