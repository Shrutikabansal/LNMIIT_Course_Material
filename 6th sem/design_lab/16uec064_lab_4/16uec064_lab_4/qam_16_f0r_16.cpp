
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
	int n =4;
	int lenout=4*n;
	int index;
	int leninp1 = 4*n;
	creal_T h[leninp1];
	creal_T x[leninp1];
 	creal_T  y[leninp1/4];
	creal_T t[leninp1];
	
	cout << " values of x: ";
	 for(i = 0; i < leninp1; i++)
    {
    
    	h[i].re=(rand()%2);
    	h[i].im=(rand()%2);
    	x[i].re=(rand()%2);
    	//x[i].im=2*(rand()%2)-1;  
		 	
    	
	cout <<x[i].re << " ";
    	
    
    }
    
	cout << "\n "<< "\n" ;
	
	for(i = 0; i < leninp1/4; i++)
	{
		if(x[4*i].re==0&&x[4*i+1].re==0&&x[4*i+2].re==0&&x[4*i+3].re==1)
			y[i].re=1;
			y[i].im = 3;
			
			
		
		if(x[4*i].re==0&&x[4*i+1].re==1&&x[4*i+2].re==0&&x[4*i+3].re==1)
			y[i].re=3;
			y[i].im = 3;
			
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==1&&x[4*i+2].re==0&&x[4*i+3].re==0)
			y[i].re=3;
			y[i].im = 1;
			
			
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==1&&x[4*i+2].re==1&&x[4*i+3].re==0)
			y[i].re=3;
			y[i].im = -1;
			
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==1&&x[4*i+2].re==1&&x[4*i+3].re==1)
			y[i].re=3;
			y[i].im = 3;
			
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==0&&x[4*i+2].re==0&&x[4*i+3].re==0)
			y[i].re=1;
			y[i].im = 1;
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==0&&x[4*i+2].re==1&&x[4*i+3].re==1)
			y[i].re=1;
			y[i].im = -1;
			
			
			
			
		if(x[4*i].re==0&&x[4*i+1].re==0&&x[4*i+2].re==1&&x[4*i+3].re==1)
			y[i].re=1;
			y[i].im = 3;
			
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==0&&x[4*i+2].re==0&&x[4*i+3].re==1)
			y[i].re=-1;
			y[i].im = 3;
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==0&&x[4*i+2].re==0&&x[4*i+3].re==0)
			y[i].re=-1;
			y[i].im = 1;
			
			
		if(x[4*i].re==1&&x[4*i+1].re==0&&x[4*i+2].re==1&&x[4*i+3].re==0)
			y[i].re=-1;
			y[i].im = -1;
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==0&&x[4*i+2].re==1&&x[4*i+3].re==1)
			y[i].re=-1;
			y[i].im = 3;
			
			
		if(x[4*i].re==1&&x[4*i+1].re==1&&x[4*i+2].re==0&&x[4*i+3].re==1)
			y[i].re=-3;
			y[i].im = 3;
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==1&&x[4*i+2].re==0&&x[4*i+3].re==0)
			y[i].re=-3;
			y[i].im = 1;
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==1&&x[4*i+2].re==1&&x[4*i+3].re==0)
			y[i].re=3;
			y[i].im = 3;
			
			
			
		if(x[4*i].re==1&&x[4*i+1].re==1&&x[4*i+2].re==1&&x[4*i+3].re==1)
			y[i].re=-3;
			y[i].im = 3;	
			
		
	
	}
	cout<< "values of y: ";
	
		for(i = 0; i < leninp1/4; i++)
				cout << y[i].re<< " "<< y[i].im << "\n" ;
	
	
	
	/* for(i = 0; i < leninp1; i++)
	 {
	 	

			if(x[i].re>0)
					t[i].re=1;
			else 
					t[i].re=0;
	
			if(x[i].im>0)
					t[i].im=1;
			else 
					t[i].im=0;
	
	
	
	cout << " values of x: ";
	cout << t[i].re << " "<< t[i].im << "\n";
	 }
	
	*/
	
	
   /* for(i = 0; i < leninp1; i++)
    {
    	y[i].re = (x[i].re)*(h[i].re);//-(x[i].im)*(h[i].im);
//	y[i].im =(x[i].re)*(h[i].im);
		
		y[i].re = y[i].re*(h[i].re-h[i].im)/(pow(h[i].re,2)+pow(h[i].im,2));

	//	y[i].im = y[i].im*(h[i].re-h[i].im)/(pow(h[i].re,2)+pow(h[i].im,2));
		
//		cout<<" after conjugate: ";
//cout << y[i].re <<" "<< y[i].im<<"\n";

    }
    
    
  for(i = 0; i < leninp1; i++)
  {
  
			if(y[i].re<0)
					y[i].re = -1;
			else 
					y[i].re = 1;
	
			//if(y[i].im<0)
				//	y[i].im = -1;
		//	else
		//			y[i].im = 1;		
cout<< " after thresholding: ";
cout << y[i].re <<" "<< "\n";
  }
    */
    
	return 0;
}



