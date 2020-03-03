#ifndef WIRED_H
#define WIRED_H

#include "tmwtypes.h"

class wiredch
{
public:
	wiredch();						// constructor
	~wiredch();						// destructor
	void wiredcha(int,creal_T*,creal_T*);// pass tx data for mapping
    private:
	int leninp1;						// length of input data
    int leninp2;						// length of input data
	int mode;						
};

#endif

