#include <iostream>
using namespace std;
#include <cmath>
//#include "wired.h"
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"


int main()
{
    
	FILE *input;
    input=fopen("cameraman1.bmp","r");
    int len=0;
    char ch;
    int i;
    fseek(input,0,SEEK_END);
    len=ftell(input);
    cout<<"length of image"<<endl<<len<<endl;
    fclose(input);
    input=fopen("cameraman1.bmp","r");
    char im[len];
    int im1[len];
    
    for(i=0;i<len;i++)
    {
    	im[i]=fgetc(input);
    	im1[i]=im[i]+128;
    	cout<<im1[i]<<endl;
    }
    int binseq[len*8];
    int count=0;
    for(i=0;i<len;i++)
    {
    	int n=im[i];
    	int bin[8]={0,0,0,0,0,0,0,0};
    	int pp = 0; 
    	while (n > 0) 
		{ 
        	bin[7-pp] = n % 2; 
			n = n / 2; 
        	pp++; 
    	} 
    	for (int j=0; j<8;j++)
		{ 
		binseq[count] = bin[j];
		count = count+1;
		}
	for (int j=0; j<8;j++){
		cout<<binseq[j];
	}

	fclose(input);
	}
	creal_T X_qpsk[count/2] = {};
	cout<<"QPSK Modulation"<<endl;	
	for (i = 0; i<count/2; i++)
	{
		if (binseq[2*i]==1)
			X_qpsk[i].re = -1;
		else 
			X_qpsk[i].re = 1;
		if (binseq[2*i+1]==1)
			X_qpsk[i].im = -1;
		else 
			X_qpsk[i].im = 1;
	}
	for(i=0;i<count/2;i++)
	{
		cout<<X_qpsk[i].re<<"  "<<X_qpsk[i].im<<endl;
	}
	
	int X_reconstructed[count];
	for (i=0;i<count/2;i++)
	{
		if (X_qpsk[i].re == -1)
		X_reconstructed[2*i]=1;
		else 
		X_reconstructed[2*i]=0;
		if (X_qpsk[i].im == -1)
		X_reconstructed[2*i+1]=1;
		else 
		X_reconstructed[2*i+1]=0;
	}
	int k=0;
	int img_recon[count/8];
	for (i=0;i<count/8;i++)
	{
		img_recon[k] = pow(2,7)*X_reconstructed[8*i]+pow(2,6)*X_reconstructed[8*i+1]+pow(2,5)*X_reconstructed[8*i+2]+pow(2,4)*X_reconstructed[8*i+3]+pow(2,3)*X_reconstructed[8*i+4]+pow(2,2)*X_reconstructed[8*i+5]+pow(2,1)*X_reconstructed[8*i+6]+pow(2,0)*X_reconstructed[8*i+7];
		k = k+1;
	}
	FILE *input1 = fopen("recon.txt", "w"); 
	for (i=0; i<count/8; i++) 
    { 
        fprintf(input1,"%d\n", img_recon[i]);
    }
	return(0); 
}
