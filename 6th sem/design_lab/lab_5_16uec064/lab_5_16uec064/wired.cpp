#include <iostream>
using namespace std;
#include <cmath>
#include "wired.h"
#include <fstream>

// Constructor:
// To initialize variables and to create dynamic array structures.
// Calling initialization modules.
wiredch::wiredch()
{
	mode = 0;
	leninp1 = 0;
    leninp2 = 0;
}

// Destructor:
// To delete the dynamic array structure.
wiredch::~wiredch()
{
}

void wiredch::wiredcha(int ln1,creal_T* pinput1,creal_T* pout)
{
	int i,j,k;
	int lenout;
	int index;
	leninp1 = ln1;
	k=1;
     for(i = 1; i <= leninp1; i+2)
    {
        if ((pinput1[i].re >0)  && (pinput1[i].im > 0 ))
        {
		
         pout[k].re = 0;
           pout[k+1].re = 0;
    	}
       else if( (pinput1[i].re <0 ) && (pinput1[i].im > 0) )
       {		 pout[k].re = 0;
            pout[k+1].re = 1;}
    
    else if( (pinput1[i].re <0 ) && (pinput1[i].im < 0) )
       {
	   pout[k].re = 1;
            pout[k+1].re = 1;
     }
    else if ( (pinput1[i].re >0 ) && ( pinput1[i].im < 0) )
      { pout[k].re = 1;
            pout[k+1].re = 0;
    }
	}
    k=k+2;


    return;
}



