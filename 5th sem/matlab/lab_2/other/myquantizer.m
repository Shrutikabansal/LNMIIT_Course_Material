function [y] = myquantizer(x,L)

%Uniform Quantizer
xmax=max(x);
xmin=min(x);
step=(xmax-xmin)/L;
m=length(x);     %%no of bits
y=zeros(1,length(x));



for k=1:1:m

    level=round((x(k)-xmin)/step);
    y(k)=level*step+xmin;

end

end
