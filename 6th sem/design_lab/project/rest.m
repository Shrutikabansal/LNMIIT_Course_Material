function [final_r] = rest(R,C,x)
%UNTITLED4 Summary of this function goes here
%   Detailed explanation goes here
%% modulation
j=1;
y=complex(zeros(round(R*C/6),1),zeros(round(R*C/6),1));
for i=1:6:R*C-6

 if(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7+1i*7;
 
 elseif (x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5+1i*7;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3+1i*7;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1+1i*7;

 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7+1i*5;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5+1i*5;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3+1i*5;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1+1i*5;

 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7+1i*3;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5+1i*3;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3+1i*3;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1+1i*3;

 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7+1i*1;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5+1i*1;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3+1i*1;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1+1i*1;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7-1i*1;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5-1i*1;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3-1i*1;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1-1i*1;

 %
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7-1i*3;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5-1i*3;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3-1i*3;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1-1i*3;
 
 %
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7-1i*5;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5-1i*5;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3-1i*5;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1-1i*5;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=-7-1i*7;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=-5-1i*7;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=-3-1i*7;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==0&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=-1-1i*7;
 %
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1+1i*7;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3+1i*7;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5+1i*7;
 
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7+1i*7;
 
 %
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1+1i*5;

 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3+1i*5;
 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5+1i*5;

 elseif(x(i)==0&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7+1i*5;
 %
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1+1i*3;
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3+1i*3;
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5+1i*3;
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7+1i*3;
 
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1+1i*1;

 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3+1i*1;

 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5+1i*1;
 elseif(x(i)==0&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7+1i*1;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1-1i*1;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3-1i*1;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5-1i*1;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7-1i*1;
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1-1i*3;
 
 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3-1i*3;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5-1i*3;

 elseif(x(i)==1&&x(i+1)==1&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7-1i*3;
 %
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1-1i*5;

 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3-1i*5;

 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5-1i*5;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==1&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7-1i*5;	
 %
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==0)
 
 y(j)=1-1i*7;

 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==1&&x(i+5)==1)
 
 y(j)=3-1i*7;

 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==1)
 
 y(j)=5-1i*7;
 
 elseif(x(i)==1&&x(i+1)==0&&x(i+2)==0&&x(i+3)==1&&x(i+4)==0&&x(i+5)==0)
 
 y(j)=7-1i*7;
 end
 j=j+1;	
end
%%
v=(1/sqrt(2))*(randn(1067,1)+1j*randn(1067,1));
h=(1/sqrt(2))*(randn(1067,1)+1j*randn(1067,1));

snr_db=100;
final=zeros(R*C,1);
snr_lin=10^(snr_db/10);
a=sqrt(1/snr_lin);
Y=h.*y+v*a;
dec1=Y./h;
j=1;

for i=1:1066
 dec1(i)=round(dec1(i));
end

for i=1:round(R*C/6)-1
	if(real(dec1(i))==-7&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==7)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==5)
	
	final(j)=0;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==3)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==1)
	
	final(j)=0;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==-7)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==-5)
	
	final(j)=1;
	final(j+1)=0;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==-3)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=1;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	
	
	elseif(real(dec1(i))==-7&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==-5&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	
	elseif(real(dec1(i))==-3&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=1;
	
	
	elseif(real(dec1(i))==-1&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=0;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	
	
	elseif(real(dec1(i))==1&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=0;
	
	
	
	elseif(real(dec1(i))==3&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=1;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==5&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=1;
	
	
	
	elseif(real(dec1(i))==7&&imag(dec1(i))==-1)
	
	final(j)=1;
	final(j+1)=1;
	final(j+2)=0;
	final(j+3)=1;
	final(j+4)=0;
	final(j+5)=0;
	end
	j=j+6;
 end
 final(j)=1;
 final(j+1)=1;
 final(j+2)=0;
 final(j+3)=1;
 
%% comparision
final_r=reshape(final,R,C);
end

