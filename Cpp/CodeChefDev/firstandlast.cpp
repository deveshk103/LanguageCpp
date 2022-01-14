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
		int first;
		first = num%10;

		int last;
		while(num!=0){
			int t;
			t = num%10;
			last = t;
			num = num/10;
		}
		int sum;
		sum = first + last;
		cout<<sum<<endl;
	}
	return 0;
}