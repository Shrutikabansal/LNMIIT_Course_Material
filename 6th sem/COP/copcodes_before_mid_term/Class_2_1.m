close all;

%Character string

f='Hello';
s='World';

x=[f s];

%Operators

g=9.81;     %
m=68.1;
cd=0.25;

t=0:2:20;

v= sqrt(g*m/cd)*tanh(sqrt(g*cd/m)*t);

plot(t,v);
xlabel('time (in sec)');
ylabel('velocity (in m/sec)');
grid();
legend('velocity');

figure;
plot(t,v,'b--',t,v,'ro');     %These are plot format specifiers.

%Similar to above:
figure;
plot(t,v,'b');
hold on;
plot(t,v,'ro');
hold off;

%%MATLAB expression:

t=1:1:10;
y=(t-1)./(t+1);

z=sin(t.^2)./(t.^2);

w=1./t;