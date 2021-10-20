#include<iostream>
#include<stdio.h>
using namespace std;

int main (void)
{
	int r1;
	cin >> r1;
	int c1;
	cin >> c1;
	
	int r2;
	cin >> r2;
	int c2;
	cin >> c2;
	
	int a[r1][c1];
	int b[r2][c2];
	int c[r1][c2];

	int i,j,k;
	
	
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			cout << "enter value of :" << i << j << " ";
			cin >> a[i][j];
		}
	}
	
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			cout << "enter value of :" << i << j << " ";
			cin >> b[i][j];
		}
	}
	
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			c[i][j]=0;
		}
	}
	
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(k=0; k<c1; k++)
			{
				cout << c[i][j] << "\n";
				c[i][j] =c[i][j] + a[i][k]*b[k][j];
				cout << c[i][j] << "\n";
			}

		}
	}
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}





 


