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
int z[1024];
 int decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[1000]; 
  	for(int i=0; i<8; i++)
  	binaryNum[i]=0;
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = 7; j >= 0; j--) 
        x[incr++]=binaryNum[j]; 
} 
  
  
  int binaryToDecimal(long int n) 
{ 
    long int num = n; 
    long int dec_value = 0; 
      
    // Initializing base value to 1, i.e 2^0 
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
    //FILE *shrutika;
    
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
    	buffer1[i]=buffer[i]+128;
   	decToBinary(buffer1[i]);
   
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
	for(int i=0; i<n;)
	{
		if(x[i]==0&&x[i+1]==0)
			{
				xnew[j].re=1;
				xnew[j].im=1;
			}
		else if(x[i]==0&&x[i+1]==1)
			{
				xnew[j].re=-1;
				xnew[j].im=-1;
			}
		else if(x[i]==1&&x[i+1]==0)
			{
				xnew[j].re=-1;
				xnew[j].im=1;
			}
		else if(x[i]==1&&x[i+1]==1)
			{
				xnew[j].re=1;
				xnew[j].im=-1;
			}
		i=i+2;
		j=j+1;
	}
	for(int i=0; i<n/2;i++)
	{
		h[i].re=rand();
		h[i].im=rand();
	}
	
	
	for(int i=0;i<n/2;i++)
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
	for(int i=0; i<n/2; i++)
	{
		if(det[i].re==1&&det[i].im==1)
		{
			final[j++]=0;
			final[j++]=0;
		}
		else if(det[i].re==1&&det[i].im==-1)
		{
			final[j++]=1;
			final[j++]=1;
		}
		else if(det[i].re==-1&&det[i].im==1)
		{
			final[j++]=1;
			final[j++]=0;
		}
		else if(det[i].re==-1&&det[i].im==-1)
		{
			final[j++]=0;
			final[j++]=1;
		}
	}
//	for(int i=0; i<n; i++)
//	cout<<x[i];
//	cout<<"\n";
	//for(int i=0; i<n; i++)
//	cout<<final[i];
	
	int reconst[1024];
	int z=0;
	long int shruti=0;
	for(int i=0; i<1024*8; )
	{
		for(int k=0; k<8; k++)
		{
			int p=final[i+k];
			shruti=p*pow(10,7-k)+shruti;
		
		}
			int rep=binaryToDecimal(shruti);
			reconst[z++]=rep;
		shruti=0;
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
		fputc((reconstim[i]),out);
	
	}
//	shrutika = fopen("out.txt","wb"); 
	
  return 0; 
} 
