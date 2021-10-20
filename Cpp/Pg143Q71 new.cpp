#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
	int n=1, k, i=0, j, a1, a2, a3, d2, d3, d;
	cout << "Hello ji";
	while (i!=10)
	{
		a1 = n*1;
		a2 = n*2;
		a3 = n*3;
		d2=0; d3=0;
		
		for(i=a2; i>0; i=i/10)
		{
			d2++;
		}
		for(i=a3; i>0; i=i/10)
		{
			d3++;
		}
		
		k = a1*pow(10,(d2+d3)) + a2*pow(10,d3) + a3;
		cout << k << endl;
		
		for(i=1; i<=9; i++)
		{
			for(j=k; j>0; j=j/10)
			{
				d = j%10;
				cout << d << endl;
				if(d==i)
				{
					break;
				}
			}
			if(j==0)
			{
				break;
			}
		}
	}
}
