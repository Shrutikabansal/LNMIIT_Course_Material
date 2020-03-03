#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>
#include"tmwtypes.h"
#include"stdlib.h"

int main() {
	int i, j;
	int n = 10, N = 5, max = 32767;
	double x[5][1000], y[1000] = {0}, z[1000];
	ofstream fout;
	fout.open("noise.txt");
	for (j = 0; j<N; j++)
	{
		srand(j);
		for (i = 0;i<n;i++)
		{
			x[j][i] = (double)rand()/max;
			cout <<x[j][i]<<endl;
		}
		cout<<"xxxxxx"<<endl;
	}
	cout<<"------"<<endl;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<N; j++)
		{
			y[i] = y[i]+x[j][i];
		}
		cout<<y[i]<<endl;
	}
	cout<<"======="<<endl;
	for (j = 0; j<n; j++)
	{
		z[j] = y[j]/N;
		cout << z[j] <<endl;
		fout << z[j] <<"\t";
	}
	fout.close();
	return 0;
}
