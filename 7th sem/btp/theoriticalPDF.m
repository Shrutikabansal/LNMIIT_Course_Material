function [pdf] = theoriticalPDF(interval,const1,height,radius,m)
%theoriticalPDF function helps find the PDF of LOS DC Channel Gain
constant2 = (2/((radius^2)*(m + 3)))*(const1*(m + 1)*(height^(m+1)))^(2/(m + 3) + 0.5);
pdf =  constant2 .*(interval.^(-2/(m+3)-1));
end

