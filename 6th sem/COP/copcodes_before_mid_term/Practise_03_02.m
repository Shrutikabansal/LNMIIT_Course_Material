% A=[1,2,3;4,5,6;7,8,9];
% b=[1;2;3];
% i=A\b;
% C=[10,10,10;10,10,10;10,10,10];
% j=A./C;*/

f=@(x,y)x.^2+y.^2;
figure;
fplot(f,[1,2],[3,4]);

