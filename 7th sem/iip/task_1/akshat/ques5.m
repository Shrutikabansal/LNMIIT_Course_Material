%%Akshat Jethlia        16ucc102
%%Shrutika Bansal       16uec064



clc;
clear all;
close all;
img=imread('fig8.jpg');
unsharp=imsharpen(img);

matrix=[[0 -1 0];[-1 5 -1];[0 -1 0]];
lap=imfilter(img,matrix);


figure(2);

subplot(3,1,1)
imshow(unsharp)
title('Unsharp');
subplot(3,1,2);
imshow(lap)
title('Laplacian Filter');
subplot(3,1,3);
imshow(img)
title('Original Image');

saveas(figure(2),'ans2.jpg');



% <<ans2.jpg>>


