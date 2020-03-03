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
	
    for(i = 0; i < leninp1; i++)
    {
		if (pinput1[i].re>0)
			pout[i].re = 0;
		else
			pout[i].re = 1;
        
		if (pinput1[i].im>0)
			pout[i].im = 0;
		else
			pout[i].im = 1;
    }

    return;
}
