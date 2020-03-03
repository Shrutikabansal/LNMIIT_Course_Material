#include <iostream>
using namespace std;

#include <cmath>
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"


int main() {

	int i,j,k;
	int lenout=10;
	int index;
	int leninp = 10;
	int input[10];
	creal_T qpsk[5];
	
	 for(i=0;i<leninp;i++)
    {
    	input[i]=rand()%2;
    }
	
    for(i=0;i<leninp;i++)
    {
		if ((input[i]==0) && (input[i+1]==0))
		{
            qpsk[i].re = 1;
        	qpsk[i].im = 1;
		}
		else if ((input[i]==0) && (input[i+1]==1))
		{
            qpsk[i].re = 1;
        	qpsk[i].im = -1;
		}
		else if ((input[i]==1) && (input[i+1]==0))
		{
            qpsk[i].re = -1;
        	qpsk[i].im = -1;
		}
		else if ((input[i]==1) && (input[i+1]==1))
		{
            qpsk[i].re = -1;
        	qpsk[i].im = 1;
		}
		i = i+1;
	}
	int out[10];
	creal_T n[5];
	creal_T y[5];
	double max1 = RAND_MAX;
	for(int i=0;i<5;i++)
	{
		n[i].re = rand()/max1;
		n[i].im = rand()/max1;
		
		y[i].re = qpsk[i].re + n[i].re;
		y[i].im = qpsk[i].im + n[i].im;	
	}
	for(int i=0;i<10;i++)
	{
		if(y[i].re>0 && y[i].im>0)
		{
			out[i] = 0;
			out[i+1] = 0;
		}
		else if(y[i].re>0 && y[i].im<0)
		{
			out[i] = 0;
			out[i+1] = 1;
		}
		else if(y[i].re<0 && y[i].im<0)
		{
			out[i] = 1;
			out[i+1] = 0;
		}
		else if(y[i].re<0 && y[i].im>0)
		{
			out[i] = 1;
			out[i+1] = 1;
		}
		i = i+1;
	}
	for(int i=0;i<10;i++)
		cout << input[i] << " " << out[i] << endl;
	return 0;
}

