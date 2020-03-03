%Linear Regression

x=[10:10:80];
y=[25,70,380,550,610,1220,830,1450];

n=length(x);

C=[n,sum(x);sum(x),sum(x.^2)];
B=[sum(y);sum(x.*y)];

a=C\B;
y_mod=a(1)+a(2)*x;

scatter(x,y);
hold('on');
plot(x,y_mod);
hold off;