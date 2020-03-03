clc;
clear all;
close all;

l=1;
c=1;
dt=0.005;
hx=10^(-2);
tf=60;

lamda=c*dt/hx;

%here lamda<=1;

x=0:hx:l;
t=0:dt:tf;

Nx=length(x);
Nt=length(t);
%{
if(x=0)
    uxofn= @(x) 0;
    elseif(0<x && x<l)
           uxofn= @(x) exp(-100*((x-0.5)^(2)));
    elseif (x>l)
            uxofn = @(x) 0;
end
%}

uxt = @(x) exp(-100*((x-0.5).^(2)));

dxdtfn = @(x,t) 0;

u= zeros(Nx,Nt);

u(2:Nx-1,1)=uxt(x(2:Nx-1));
plot(x,u(:,1));

for i=2:Nx-1
    u(i,2)=0.5*((lamda)^2)*(u(i+1,1)+u(i-1,1))+(1-((lamda)^2))*(u(i,1))+dt*dxdtfn(i,1);             %equation 4

end
plot(x,u(:,2));

for j=3:Nt
    for i=2:Nx-1
        u(i,j)= ((lamda)^2)*(u(i+1,j-1)-u(i-1,j-1))+2*(1-((lamda)^2))*(u(i,j-1))-u(i,j-2);          %equation 2
    end
    plot(x,u(:,j));
    ylim([-1,1]);
    pause(0.1);
end
        

