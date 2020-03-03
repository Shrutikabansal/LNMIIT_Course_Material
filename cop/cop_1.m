clc;
clear all;
close all;

g = 9.81;          %m/s^2
m = 68.1;           %kg
cd = 0.25;          %kg/m

t = 0: 2: 20 ;
v = sqrt(g*m/cd)...
    *tanh(sqrt(g*cd/m)*t);
%plot(t,v);
%plot(t,v,'b-', t,v,'rs');           % s is for square we also can write o for circle
plot(t,v,'b-');                        % x--> x mark    +---> plus    *--->star    s---->square   d---->diamond 
hold on;                               % b---> blue         r---> red    m--->magenta   k---->black
plot(t,v,'ro');                         % g-----> green    c--->cyan    y---->yellow   w----->white
hold off;

xlabel('time s');               %solid---->-    darhdot---> -.
ylabel('velocity m/s');         %dotted-----> :   dorhed---->--
title('velocity vs time');
grid();
legend('velocity');



figure;
t = 1:10;
y1 = (t-1)./(t+1);          
y2 = sin(t.^2)./(t.^2);
y3 = 1./t;


