#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	if(t<=100 && t>=1)
	{
		for(int i=0; i<t; i++)
		{
			int a,b;
			cin >> a >> b;

			if((a,b)<=1000000 && (a,b)>=1)
			{
				cout<<max(a,b)<<" "<<(a+b)<<endl;
			}

		}
	}
	return 0;
}