#include<iostream>
using namespace std;

int factorial (int n)
{
	int i,p=1;
	for (i=1; i<=n; i++)
	{
		p = p*i;
	}
	return(p);
}

int main (void)
{
	int i;
	for(i=1; i<=20; i++)
	{
//		int n;
//		cout << "Enter the number you want the factorial of \t";
//		cin >> n;
		
		int f = factorial(i);
		cout << "Factorial =\t" << f << "\n";
	}
	
}

