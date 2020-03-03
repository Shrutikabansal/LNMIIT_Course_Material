#include<iostream>
#include<cmath>
#include<complex>
#include"tmwtypes.h"
using namespace std;

int main(){
	creal_T h;
	creal_T in;
	h.re = 1;
	h.im = 3;
	in.re = 1;
	in.im = 1;
	creal_T y;
	creal_T hc;
	creal_T y1;
	hc = h;
	hc.im = (-1)*h.im;
	y.re = (h.re*in.re) - (h.im*in.im);
	y.im = (h.re*in.im) + (h.im*in.re);
	cout<<y.re<< " ";
	cout<<y.im<< endl;
	int hn;
	hn = h.re*h.re + h.im*h.im;
	y1.re = (hc.re*y.re) - (hc.im*y.im);
	y1.im = (hc.re*y.im) + (hc.im*y.re);
	y1.re = y1.re/hn;
	y1.im = y1.im/hn;
	cout<<y1.re<< " ";
	cout<<y1.im;
	
	return 0;
}
