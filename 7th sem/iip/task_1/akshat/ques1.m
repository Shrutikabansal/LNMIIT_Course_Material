%%Akshat Jethlia        16ucc102
%%Shrutika Bansal       16uec064

clear all;
close all;

%%Finding the Bounding box by seperating r,g and b components; counting the
%%number of red, green and blue components 

I=imread('fig1.jpg');

I_gray=rgb2gray(I);

figure(1);
imshow(I);

r=I(:,:,1);
g=I(:,:,2);
b=I(:,:,3);

r=imsubtract(r,I_gray);
g=imsubtract(g,I_gray);
b=imsubtract(b,I_gray);

b1=imbinarize(r);
b2=imbinarize(g);
b3=imbinarize(b);

c1=bwconncomp(b1);
c2=bwconncomp(b2);
c3=bwconncomp(b3);


figure(2);
imshow(I);
hold on;

stat=regionprops(b1,'BoundingBox','Centroid');
for i=1:c1.NumObjects
   rectangle('Position',stat(i,1).BoundingBox,'EdgeColor','b'); 
   plot(stat(i,1).Centroid(1),stat(i,1).Centroid(2),'k*');
end

stat=regionprops(b2,'BoundingBox','Centroid');
for i=1:c2.NumObjects
   rectangle('Position',stat(i,1).BoundingBox,'EdgeColor','m');
   plot(stat(i,1).Centroid(1),stat(i,1).Centroid(2),'k*');
end

stat=regionprops(b3,'BoundingBox','Centroid');
for i=1:c3.NumObjects
   rectangle('Position',stat(i,1).BoundingBox,'EdgeColor','k');
   plot(stat(i,1).Centroid(1),stat(i,1).Centroid(2),'k*');
end

hold off;
saveas(figure(2),'ans.jpg');


% <<ans.jpg>>

