%%Akshat Jethlia        16ucc102
%%Shrutika Bansal       16uec064


clc;
clear all;
close all;


f = imread('fig5.PNG');
figure;
imshow(f);
title('Actual Image')
f_hist = histeq(f);
figure;
imshow(f_hist);
title('Histogram equalization');
f_gamma_0_0= imadjust(f,[],[],0.0);
figure;
imshow(f_gamma_0_0);
title('Gamma equalization ( 0.0)');
f_gamma_0_5= imadjust(f,[],[],0.5);
figure;
imshow(f_gamma_0_5);
title('Gamma equalization (0.5)');
f_gamma_1 = imadjust(f,[],[],1.0);
figure;
imshow(f_gamma_1);
title('Gamma equalization (1.0)');
f_gamma_2 = imadjust(f,[],[],2.0);
figure;
imshow(f_gamma_2);
title('Gamma equalization  (2.0)');
f_gamma_3 = imadjust(f,[],[],3.0);
figure;
imshow(f_gamma_3);
title('Gamma equalization with (3.0)');