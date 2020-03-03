%%Akshat Jethlia        16ucc102
%%Shrutika Bansal       16uec064

clear all;
close all;

%Reading Image
back=imread('fig2.jpg');
jerry=imread('fig4.jpg');
tom=imread('fig3.jpg');
back_copy=back;

%RGB to grey
back_grey=rgb2gray(back);
jerry_grey=rgb2gray(jerry);
tom_grey=rgb2gray(tom);

%Resize the image to size of background
j=imresize(jerry, [202,270]);
t=imresize(tom, [202,270]);

%Finding the pixles that are covering tom and jerry
back_mul=im2bw(back,0.1);
t_mul=im2bw(t,0.1);
j_mul=im2bw(j,0.1);
t_j_add=imadd(t_mul,j_mul);

figure(2);
subplot(3,1,1);
imshow(t_j_add);


for itr1=1:202
    for itr2=1:270
        if(t_j_add(itr1,itr2)==1)
            back_copy(itr1,itr2,1)=0;
            back_copy(itr1,itr2,2)=0;
            back_copy(itr1,itr2,3)=0;
        end
    end
end

answer=back_copy+j+t;
subplot(3,1,2);
imshow(back_copy);

subplot(3,1,3);
imshow(answer);

saveas(figure(2),'ans3.jpg');


% <<ans3.jpg>>

