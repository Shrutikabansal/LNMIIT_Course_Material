%Class 31-01-19     Lagrange Interpolatin technique

x=[0.10377,0.11144,0.12547];
y=[6.4147,6.5453,6.7664];
[m,n]=size(y);
xf=0.1;
yf=laginterp(x,y,xf);

yf