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
	creal_T pinput1[5];
	creal_T pout[5];
	 for(i = 0; i < leninp1; i++)
    {
    	pinput1[i].re=2*(rand()%2)-1;
    //	pinput1[i].im=1;
    }
	
    for(i = 0; i < leninp1; i++)
    {
    //	cin>>pinput1[i].re;
    
      //  if (pinput1[i].im > 0)
      if (pinput1[i].re > 0)
            pout[i].re = 1;
        else
            pout[i].re = 0;
            //printf("%f, \t %f\n",pinput1[i].re,pout[i].re);
            cout<<pinput1[i].re<<"  "<<pout[i].re<<endl;
    }
	return 0;
}
