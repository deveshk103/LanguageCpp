#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	if(t<=5 && t>=1)
	{
		for(int i=0; i<t; i++)
		{
			int p;
			cin>> p;
			int counter =0;
			int j=0;
			int a=0;
				while(p!=0)
				{
					a = pow(2,j);
					p = p-a;
					j++;
					counter++;
				}
			cout<<counter;
			}
			
	}
	return 0;
}