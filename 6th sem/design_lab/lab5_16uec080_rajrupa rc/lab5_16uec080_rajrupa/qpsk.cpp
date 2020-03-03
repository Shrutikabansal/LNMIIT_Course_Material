#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"

int main() {
	int i;
	int len = 10;
	creal_T x[10],X[5],h[5],y[5],hc[5],r[5],R[10];
	int hn[5];
	cout<<"BINARY SEQUENCE"<<endl;
	for (i = 0; i<len; i++)
	{
		x[i].re = rand()%2;
		cout<<x[i].re<<endl;
	}
	cout<<"QPSK MODULATION"<<endl;	
	for (i = 0; i<len/2; i++)
	{
		if (x[2*i].re==1)
			X[i].re = -1;
		else
			X[i].re = 1;
		if (x[2*i+1].re==1)
			X[i].im = -1;
		else
			X[i].im = 1;
		cout<<X[i].re<<"+"<<X[i].im<<"j"<<endl;	
	}
	for (i = 0; i<len/2; i++)
	{
		h[i].re = rand();
		h[i].im = rand();
	}
	for (i=0; i<len/2; i++)
	{
		y[i].re = X[i].re*h[i].re-X[i].im*h[i].im;
		y[i].im = X[i].re*h[i].im+X[i].im*h[i].re;
	
		hc[i].re = h[i].re;
		hc[i].im = -h[i].im;
		hn[i] = pow(h[i].re,2)+pow(h[i].im,2);
	}
	cout<<"RECEIVED SIGNAL"<<endl;
	for (i=0; i<len/2; i++)
	{
		r[i].re = (y[i].re*hc[i].re-y[i].im*hc[i].im)/hn[i];
		r[i].im = (y[i].re*hc[i].im+y[i].im*hc[i].re)/hn[i];
		cout<<r[i].re<<"+"<<r[i].im<<"j"<<endl;	
	}
	for(i = 0; i < len/2; i++)
    {
		if (r[i].re>0)
			R[2*i].re = 0;
		else
			R[2*i].re = 1;
		if (r[i].im>0)
			R[2*i+1].re = 0;
		else
			R[2*i+1].re = 1;
    }
	cout<<"QPSK DEMODULATION"<<endl;	
	for(i=0; i<len; i++)
	{
		cout<<R[i].re<<endl;		
	}    	
	return 0;
}
