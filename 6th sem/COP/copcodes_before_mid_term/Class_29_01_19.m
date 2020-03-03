%Class 29-01-19     Newton Interpolatin technique

x=[-1,-0.5,-0.25,0.25,0.5,1];
y=[-637,-96,-20.5,20.5,96.5,637];
[m,n]=size(y);
B=zeros(n);
xf=0.1;
yf=newinterp(x,y,n,xf);

yf


