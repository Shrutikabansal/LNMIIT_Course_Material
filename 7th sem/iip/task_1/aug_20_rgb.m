clc;
clear all;
close all;

a=imread('fig1.jpg');


agrey=rgb2gray(a);
r=a(:,:,1);
g=a(:,:,2);
b=a(:,:,3);
%figure()
%imshow(r);

%figure()
%imshow(g);

%figure()
%imshow(b);
figure()
g=imsubtract(g,agrey);
imshow(g);
figure()
b=imsubtract(b,agrey);
imshow(b);
figure()
r=imsubtract(r,agrey);
imshow(r);

r_binary=imbinarize(r);
red_obj=bwconncomp(r_binary);

g_binary=imbinarize(g);
g_obj=bwconncomp(g_binary);

b_binary=imbinarize(b);
b_obj=bwconncomp(b_binary);
%figure()
figure()
stats0=regionprops(r_binary, 'BoundingBox','Centroid');
imshow(a);
hold on;
for i=1:red_obj.NumObjects
    rectangle('Position', stats0(i,1).BoundingBox, 'EdgeColor','r');
    plot(stats0(i,1).Centroid(1),stats0(i,1).Centroid(2),'k*');
end
%hold off;


stats1=regionprops(g_binary, 'BoundingBox','Centroid');
%imshow(g_binary);
for i=1:g_obj.NumObjects
    rectangle('Position', stats1(i,1).BoundingBox, 'EdgeColor','g');
    plot(stats1(i,1).Centroid(1),stats1(i,1).Centroid(2),'k*');
end
%hold off;



stats2=regionprops(b_binary, 'BoundingBox','Centroid');
for i=1:b_obj.NumObjects
    rectangle('Position', stats2(i,1).BoundingBox, 'EdgeColor','b');
    plot(stats2(i,1).Centroid(1),stats2(i,1).Centroid(2),'k*');
end
hold off;