#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(void)
{
	int p,n;
	
	cout << "Enter number of letters in each word\t";
	cin >> n;
	cout << "\n";
	cout << "Enter 10s power for sample space generation\t";
	cin >> p;
	cout << "\n";
	
	char a[(int)pow(10,p)][n];					//Character Array Assignment
	int i,j;
	
	//RANDOM letter assignment
	for(i=0; i<pow(10,p); i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j] = rand()%(122-97) + 97;		//assigns random value (a to z)
		}
	}
	
	//Now Checking For PALINDROME
	char s[n], r[n];				//to store the word and its reverse
	for(i=0; i<pow(10,p); i++)
	{
		for(j=0; j<n; j++)
		{
			s[j] = a[i][j]; 		//storing the number
			r[(n-1)-j] = a[i][j]; 	//storing its reverse
		}
		if(strcmp(s,r)==0)			//compares the two words
		{
			cout << s << "\n";
		}
	}
}
//writer by @AdityaBanka
