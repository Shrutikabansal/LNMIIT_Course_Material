%Assignment: Miscellaneous
%%Q1) Gauss elimination by pivoting

a=[2,-6,-1;-3,-1,7;-8,1,-2];
b=[-38;-34;-20];
A=[a,b];
%n=length(A);

x=pivotalgauss(A);

