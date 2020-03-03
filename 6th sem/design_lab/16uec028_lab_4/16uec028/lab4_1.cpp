#include<iostream>
#include<cmath>
#include<complex>
#include <fstream>
#include"stdlib.h"
#include"tmwtypes.h"
using namespace std;



int main() {

	int i,j,k;
	int lenout=5;
	int index;
	int leninp = 5;
    int input[5];
	creal_T bpsk[5];
	 for(i = 0; i < leninp; i++)
    {
    	input[i]=rand()%2;
 
    }
	
    for(i = 0; i < leninp; i++)
    {
       bpsk[i].im = 0;
      if (input[i] == 0)
            bpsk[i].re = -1;
        else
            bpsk[i].re = 1;
           
            
    }

	int out[5];
	creal_T n[5];
	creal_T y[5];
	double max1 = RAND_MAX;

    for(i = 0; i < leninp; i++)
    {
    	n[i].re = rand()/double(RAND_MAX);
    	n[i].im = rand()/double(RAND_MAX);
    	//cout << n[i].re << " " << n[i].im << endl;
    	y[i].re = bpsk[i].re + n[i].re;
    	y[i].im = bpsk[i].im + n[i].im;
    	if(y[i].re > 0)
    		out[i] = 1;
		else 
		 	out[i] = 0;
		 	cout << input[i] << " " << bpsk[i].re << " " << out[i] << endl;
	}
		return 0;
	
}
