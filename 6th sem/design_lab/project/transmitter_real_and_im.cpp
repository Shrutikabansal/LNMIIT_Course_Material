#include <bits/stdc++.h> 
#include<iostream>
#include<string>
#include <cstdio> 
#include <fstream>

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
        buffer1[i]=buffer[i]+128;    //ascii
        
        decToBinary(buffer1[i]);    //binary
        
    }
    


    
    int n=1024*8;;
    int norm;
    int hre[n];
    int him[n];
    int yre[n];
    int yim[n];

    int detre[n];
    int detim[n];
    int xnewre[n/2];
    int xnewim[n/2];
    int final[n];
    int j=0;
    
    
    for(int i=0; i<n;j++,i=i+6)
    {
        if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=7;
            }
        //
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=5;
            }
        //
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=3;
            }
        //
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=1;
            }
        //
        //
        //
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=-1;
            }
        //
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=-3;
            }
        //
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=-5;
            }
        //
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=-7;
                xnewim[j]=-7;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=-5;
                xnewim[j]=-7;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=-3;
                xnewim[j]=-7;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==0&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=-1;
                xnewim[j]=-7;
            }
        //
        //
        //
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=7;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=7;
            }
        //
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=5;
            }
        else if(x[i]==0&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=5;
            }
        //
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=3;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=3;
            }
        //
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=1;
            }
        else if(x[i]==0&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=1;
            }
        //
        //
        //
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=-1;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=-1;
            }
        //
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=-3;
            }
        else if(x[i]==1&&x[i+1]==1&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=-3;
            }        
        //
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=-5;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==1&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=-5;
            }            
        //
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==0)
            {
                xnewre[j]=1;
                xnewim[j]=-7;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==1&&x[i+5]==1)
            {
                xnewre[j]=3;
                xnewim[j]=-7;
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==1)
            {
                xnewre[j]=5;
                xnewim[j]=-7;
    
            }
        else if(x[i]==1&&x[i+1]==0&&x[i+2]==0&&x[i+3]==1&&x[i+4]==0&&x[i+5]==0)
            {
                xnewre[j]=7;
                xnewim[j]=-7;
            }
            
        
    }
    	ofstream transmitre;
  	transmitre.open ("transmitre.txt");
  	for(j=0; j<1024*8/6;    j++)
  	{
  		transmitre <<xnewre[j]<<endl;
  	}
	transmitre.close();
	
	ofstream transmitim;
  	transmitim.open ("transmitim.txt");
  	for(j=0; j<1024*8/6;    j++)
  	{
  		transmitim <<xnewim[j]<<endl;
  	}
	transmitim.close();
    
    return 0;
}
