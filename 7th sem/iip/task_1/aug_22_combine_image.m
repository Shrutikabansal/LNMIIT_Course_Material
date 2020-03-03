clc;
clear all;
close all;


jerry=imread('fig4.jpg');
back=imread('fig2.jpg');
tom=imread('fig3.jpg');
back_grey=rgb2gray(back);
jerry_grey=rgb2gray(jerry);
tom_grey=rgb2gray(tom);


j=imresize(jerry, [202,270]);
t=imresize(tom, [202,270]);
back_mul=im2bw(back,0.1);
t_mul=im2bw(t,0.1);
j_mul=im2bw(j,0.1);
t_j_add=imadd(t_mul,j_mul);

%t_j_back_add=imadd(back_mul,t_j_add);

% j2=immultiply(j,back_grey);
% t2=immultiply(t,back_grey);
% j1=imsubtract(j2,back_grey);
% t1=imsubtract(t2,back_grey);
% 
% combine1=imadd(j1,back_grey);
% combine2=imadd(t1,combine1);
% combine3=imadd(t,combine2);
% combine4=imadd(j,combine3);
%combine5=imadd(t,combine4);

figure();
imshow(t_j_add);
