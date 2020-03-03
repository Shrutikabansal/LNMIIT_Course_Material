#include <iostream>
using namespace std;
#include <cmath>
//#include "wired.h"
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int i,j,k;
	int lenout=5;
	
	int index;
	int leninp1 = 5;
	creal_T X[5];
	creal_T H[5];
	creal_T Y[5];
	creal_T P[5];
	int  xsent[5];
	int xthre[5];
	double norm;
		cout << "FOR X:"<<endl;
	 for(i = 0; i < leninp1; i++)
    {
    	X[i].re=2*(rand()%2)-1;
    	if(X[i].re<0)
    	 X[i].re =0;
    	 xsent[i]=X[i].re;
    	H[i].re=2*(rand()%2)-1;
    	X[i].im=2*(rand()%2)-1;
    	H[i].im=2*(rand()%2)-1;
    
    	 cout<<X[i].re<<"  "<<X[i].im<<endl;
    //	pinput1[i].im=1;
    }
	cout << "FOR Y AND P:"<<endl;
	
    for(i = 0; i < leninp1; i++)
    {
      	Y[i].re= H[i].re*X[i].re -  H[i].im*X[i].im;
      	Y[i].im= H[i].im*X[i].re + H[i].re*X[i].im;
      	
        cout<<Y[i].re<<"  "<<Y[i].im<<endl;
        norm=pow(H[i].re,2)+pow(H[i].im,2);
        P[i].re= (H[i].re*Y[i].re - H[i].im*(-1)*Y[i].im)/norm;
        xthre[i]=P[i].re;
      	P[i].im= (H[i].im*(-1)*Y[i].re+ H[i].re*Y[i].im)/norm;
      		
         cout<<P[i].re<<"  "<<P[i].im<<endl;
    }
    cout << "FOR xthre:"<<endl;
    for(i = 0; i < leninp1; i++){
	cout<<xthre[i] <<endl;
}
    
	return 0;
}
