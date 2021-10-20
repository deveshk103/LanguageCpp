#include<iostream>
using namespace std;
int main (void)
{
	int n,k,t,c=0;
	cin >> n;
	cin >> k;
	int i;
	for(i=0; i<n; i++)
	{
		cin >> t;
		if(t%k==0)
		c++;
	}
	cout << c;
	return(0);
}
