#include <bits/stdc++.h> 
#include<iostream>
#include<string>
#include <cstdio> 
#include <fstream>

#include"stdlib.h"
using namespace std; 
int x[1024*8];
int incr=0;

  
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
  
  
  
  
  
  
int main() 
{ 
	int n=1024*8;
 	int size = n/3;
    int xnew[size];
//	int xnewim[size];
    
    ifstream file("transmiter.txt");
 
    int count = 0; 
    int x;

    // check that array is not already full
    // and read integer from file, 
         
    while (count < size && file >> x) 
        xnew[count++] = x;

	file.close();

   /* ifstream file1("transmitim.txt");
 
    count = 0; 
    // check that array is not already full
    // and read integer from file, 
         
    while (count < size && file1 >> x) 
        xnewim[count++] = x;

	file1.close();	*/

    int norm;
    int hre[n];
    int him[n];
    int yre[n];
    int yim[n];

    int detre[n];
    int detim[n];
    int final[n];
    int j=0;
    
    for(int i=0; i<n/6;i++)
    {
        hre[i]=rand()*(2^8);
        him[i]=rand()*(2^8);
        
    }
    
    j=0;
    
    for(int i=0;i<n/6;i++)
    {
        yre[i]=xnew[j]*hre[i]-(xnew[j+1]*him[i]);
        yim[i]=xnew[j+1]*hre[i]+(him[i]*xnew[j]);
        
        him[i]=-him[i];
        detre[i]=(yre[i]*hre[i])-(yim[i]*him[i]);
        detim[i]=(yre[i]*him[i])+(hre[i]*yim[i]);
		        
        norm=hre[i]*hre[i]+(him[i]*him[i]);
        
        detre[i]=(detre[i]/norm)*(2^8);
        detim[i]=(detim[i]/norm)*(2^8);
        j=j+2;
    }



    j=0;
    for(int i=0; i<n/3; i++)
    {
        if(xnew[i]==-7&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        else if(xnew[i]==-5&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==-3&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==-1&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==1&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==3&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==5&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==7&&xnew[i+1]==7)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-7&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        
        else if(xnew[i]==-5&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-3&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-1&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==1&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==3&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==5&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==7&&xnew[i+1]==5)
        {
            final[j]=0;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==-7&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-5&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==-3&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-1&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==1&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        else if(xnew[i]==3&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==5&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        else if(xnew[i]==7&&xnew[i+1]==3)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-7&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==-5&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        
        else if(xnew[i]==-3&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        else if(xnew[i]==-1&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        
        
        else if(xnew[i]==1&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==3&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==5&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==7&&xnew[i+1]==1)
        {
            final[j]=0;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
    
        
        else if(xnew[i]==-7&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        else if(xnew[i]==-5&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==-3&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==-1&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==1&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==3&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==5&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==7&&xnew[i+1]==-7)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-7&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        
        else if(xnew[i]==-5&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-3&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-1&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==1&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==3&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==5&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==7&&xnew[i+1]==-5)
        {
            final[j]=1;
            final[j+1]=0;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==-7&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-5&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        else if(xnew[i]==-3&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==-1&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        else if(xnew[i]==1&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        else if(xnew[i]==3&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        else if(xnew[i]==5&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        else if(xnew[i]==7&&xnew[i+1]==-3)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=1;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        else if(xnew[i]==-7&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==-5&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        
        else if(xnew[i]==-3&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        else if(xnew[i]==-1&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=0;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        
        
        else if(xnew[i]==1&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=0;
        }
        
        
        else if(xnew[i]==3&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=1;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==5&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=1;
        }
        
        
        else if(xnew[i]==7&&xnew[i+1]==-1)
        {
            final[j]=1;
            final[j+1]=1;
            final[j+2]=0;
            final[j+3]=1;
            final[j+4]=0;
            final[j+5]=0;
        }
        j=j+6;
        i=i+1;
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
        //cout<<(reconst[i])<<" "<<(buffer1[i])<<"\n";
    }
    
    
    
    FILE* out;
    
    out = fopen("out1.bmp","wb"); 
    for(int i=0; i<1024; i++)
    {
        fputc((reconst[i])-128,out);
    }
    
  return 0; 
}
