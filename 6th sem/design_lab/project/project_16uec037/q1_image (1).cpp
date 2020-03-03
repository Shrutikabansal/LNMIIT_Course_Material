#include <bits/stdc++.h> 
#include<iostream>
#include<string>
#include <cstdio> 
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"
using namespace std; 
int x[1024*8];
int incr=0;
void decToBinary(int n) 
{ 
    int binaryNum[1000]; 
  	for(int i=0; i<8; i++)
  	binaryNum[i]=0;
    int i = 0; 
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    for (int j = 7; j >= 0; j--) 
        x[incr++]=binaryNum[j]; 
} 
  
  
int binaryToDecimal(long int n) 
{ 
    long int num = n; 
    long int dec_value = 0; 
      
    int base = 1; 
      
    long int temp = num; 
    while (temp) 
    { 
        long int last_digit = temp % 10; 
        temp = temp/10; 
          
        dec_value += last_digit*base; 
          
        base = base*2; 
    } 
      
    return dec_value; 
} 
  
  
  
  
  
  
  
int main() 
{ 
    FILE* file1; 
    FILE* out;
    
    char buffer[1024]; 
    int buffer1[1024];
    file1 = fopen("cameraman1.bmp","r"); 
    int count=0;
    while (!feof(file1)) 
    { 
        fread(buffer, sizeof(buffer), 1, file1); 
    }
    for(int i=0; i<1024; i++)
    {
    	buffer1[i]=buffer[i]+128;	//ascii
    	
    	decToBinary(buffer1[i]);	//binary
    	
	}
	


	
	int n=1024*8;;
	int norm;
	creal_T h[n];
	creal_T y[n];
	creal_T conj[n];
	creal_T det[n];
	creal_T xnew[n/2];
	int final[n];
	int j=0;
	
	
	for(int i=0; i<n;	j++,i=i+6)
	{
		if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=7;
			}
		//
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=5;
			}
		//
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=3;
			}
		//
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=1;
			}
		//
		//
		//
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=-1;
			}
		//
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=-3;
			}
		//
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=-5;
			}
		//
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=-7;
				xnew[j].im=-7;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=-5;
				xnew[j].im=-7;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=-3;
				xnew[j].im=-7;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=-7;
			}
		//
		//
		//
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=7;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=7;
			}
		//
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=5;
			}
		else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=5;
			}
		//
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=3;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=3;
			}
		//
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=1;
			}
		//
		//
		//
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=-1;
			}
		//
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=-3;
			}
		else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=-3;
			}		
		//
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=-5;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=-5;
			}			
		//
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
			{
				xnew[j].re=1;
				xnew[j].im=-7;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
			{
				xnew[j].re=3;
				xnew[j].im=-7;
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
			{
				xnew[j].re=5;
				xnew[j].im=-7;
	
			}
		else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
			{
				xnew[j].re=7;
				xnew[j].im=-7;
			}
			
		
	}
	
	
	for(int i=0; i<n/6;i++)
	{
		h[i].re=rand();
		h[i].im=rand();
	}
	
	
	for(int i=0;i<n/6;i++)
	{
		y[i].re=xnew[i].re*h[i].re-(xnew[i].im*h[i].im);
		y[i].im=xnew[i].im*h[i].re+(h[i].im*xnew[i].re);
		h[i].im=-h[i].im;
		det[i].re=(y[i].re*h[i].re)-(y[i].im*h[i].im);
		det[i].im=(y[i].re*h[i].im)+(h[i].re*y[i].im);
		norm=h[i].re*h[i].re+(h[i].im*h[i].im);
		det[i].re=det[i].re/norm;
		det[i].im=det[i].im/norm;
	}



	j=0;
	for(int i=0; i<n/6; i++)
	{
		if(xnew[i].re==-7&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		else if(xnew[i].re==-5&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==-3&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==-1&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==1&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==3&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==5&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==7&&xnew[i].im==7)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-7&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		
		else if(xnew[i].re==-5&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-3&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-1&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==1&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==3&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==5&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==7&&xnew[i].im==5)
		{
			final[j]=0;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==-7&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-5&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==-3&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-1&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==1&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==3&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==5&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		else if(xnew[i].re==7&&xnew[i].im==3)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-7&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==-5&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		
		else if(xnew[i].re==-3&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		else if(xnew[i].re==-1&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		
		
		else if(xnew[i].re==1&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==3&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==5&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==7&&xnew[i].im==1)
		{
			final[j]=0;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
	
		
		else if(xnew[i].re==-7&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		else if(xnew[i].re==-5&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==-3&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==-1&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==1&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==3&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==5&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==7&&xnew[i].im==-7)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-7&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		
		else if(xnew[i].re==-5&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-3&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-1&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==1&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==3&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==5&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==7&&xnew[i].im==-5)
		{
			final[j]=1;
			final[j+1]=0;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==-7&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-5&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		else if(xnew[i].re==-3&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==-1&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		else if(xnew[i].re==1&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==3&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		else if(xnew[i].re==5&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		else if(xnew[i].re==7&&xnew[i].im==-3)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=1;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		else if(xnew[i].re==-7&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==-5&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		
		else if(xnew[i].re==-3&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		else if(xnew[i].re==-1&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=0;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		
		
		else if(xnew[i].re==1&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=0;
		}
		
		
		else if(xnew[i].re==3&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=1;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==5&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=1;
		}
		
		
		else if(xnew[i].re==7&&xnew[i].im==-1)
		{
			final[j]=1;
			final[j+1]=1;
			final[j+2]=0;
			final[j+3]=1;
			final[j+4]=0;
			final[j+5]=0;
		}
		j=j+6;
	}

	
	int reconst[1024];
	int z=0;
	long int m=0;
	for(int i=0; i<1024*8; )
	{
		for(int k=0; k<8; k++)
		{
			int p=final[i+k];
			m+=p*pow(10,7-k);
		
		}
			int rep=binaryToDecimal(m);
			reconst[z++]=rep;
		m=0;
		i=i+8;
	}
	
	char reconstim[1024];
	for(int i=0; i<1024;i++)
	{
		reconstim[i]=char(reconst[i]-128);
		cout<<(reconst[i])<<" "<<(buffer1[i])<<"\n";
	}
	
	
	
	
	
	out = fopen("out.bmp","wb"); 
	for(int i=0; i<1024; i++)
	{
		fputc((reconst[i])-128,out);
	}
	
  return 0; 
} 
