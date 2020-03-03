clear all;

%%Tridiagonal matrix

A=[2.04,-1,0,0;-1,2.04,-1,0;0,-1,2.04,-1;0,0,-1,2.04];

r=[40.8,0.8,0.8,200.8];

e=[0,-1,-1,-1];
f=[2.04,2.04,2.04,2.04];
g=[-1,-1,-1,0];

%Forward elimination
n=length(A);

for i=2:1:n

    e(i)=0;
    f(i)=f(i)-g(i-1)*(e(i)/f(i-1));
    r(i)=r(i)-r(i-1)*(e(i)/f(i-1));
    
end

%Back substitution
x=zeros(1,n);

x(n)=f(n)/r(n);
for i=n-1:-1:1

    x(i)=(r(i)-g(i)*x(i+1))/f(i);
    
end
