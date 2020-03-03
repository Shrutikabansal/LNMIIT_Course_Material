clc;
clear all;
close all;

file1=imread('cameraman1.bmp');
[R,C] = size(file1);
x=file1(:);
x=x';

final_r=rest(R,C,x);


figure;
subplot(2,1,1);
imshow(double(file1));
subplot(2,1,2);
imshow(final_r);

%% error
err=0;
for i=1:80
 for j=1:80
 if(file1(i,j)~=final_r(i,j))
 err=err+1;
 end
 end
end
err=(err/6400)*100;