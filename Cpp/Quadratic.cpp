#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main (void)
{
	double a,b,c,d,sq,r,r1,r2;
	
	for(int i =0; i<=5; i++) 	//runs the loop for 5 sample values
	{
	
	a = rand()% 100 + 1; 		//random number initialization in range 1 to 100
	b = rand()% 100 + 1; 		//random number initialization in range 1 to 100
	c = rand()% 100 + 1; 		//random number initialization in range 1 to 100
	
	//	a = 4;					//For test values
	//	b = 10;
	//	c = 4;
	
	//	cout << "Enter coefficients of quadratic Equation \n";
	//	cout << "Enter a \n";
	//	cin >> a;
	//	cout << "Enter b \n";
	//	cin >> b;
	//	cout << "Enter c \n";
	//	cin >> c;
	
		d= pow(b,2)-(4*a*c);	//Determinant Calculation
		if(d<0)					//Checks for Imaginary Roots
		{
			i--;
			continue;
		}	
		cout << "value of Determinant is : " << d << "\n";
					
		sq = sqrt (d);			//finds root of determinant
		cout << "Value of Square Root \t" << sq << "\n";
		cout << "Int of Square Root \t" << (int)sq << "\n";
		
		if(sq==0)				//determinant is zero
		{
			cout << "Real and Equal Roots \n";
			r = b/(-2*a);
			cout << "Value of Root is \t" << r << "\n";
		}
		else if((int)sq==sq)	//determinant is a perfect square
		{
			cout << "Integer Diffrrent Roots \n";
			r1 = (sq-b)/(-2*a);
			r2 = (sq+b)/(-2*a);
			cout << "Root 1 \t" << r1 << "\n";
			cout << "Root 2 \t" << r2 << "\n";
		}
		else 					//determinant is not a square
		{
			cout << "Real mixed Roots \n";
		}
		cout << "\n";
	}
}
