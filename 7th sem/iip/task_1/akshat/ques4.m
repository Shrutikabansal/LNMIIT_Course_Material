%%Akshat Jethlia        16ucc102
%%Shrutika Bansal       16uec064


clc;
clear all;
close all;
img=imread('fig7.png');
h1=ones(3,3)/9;
h2=ones(5,5)/25;
h1_avg=imfilter(img,h1);
h2_avg=imfilter(img,h2);
med1=medfilt3(img,[3,3,3]);
med2=medfilt3(img,[5,5,3]);
figure(2)
subplot(2,2,1);
imshow(h1_avg);
title('3X3 Average');
subplot(2,2,2);
imshow(h2_avg);
title('5X5 Average');
subplot(2,2,3);
imshow(med1);
title('3X3 Median');
subplot(2,2,4);
imshow(med2);
title('5X5 Median');


saveas(figure(2),'ans1.jpg');


% <<ans1.jpg>>


