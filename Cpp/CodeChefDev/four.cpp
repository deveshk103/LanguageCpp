#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		int a;
		int count=0;

		while(num!=0)
		{
			a = num%10;
			if(a==4){
				count++;
			}
			num = num/10;
		}
		cout<<count<<endl;
	}
	return 0;
}