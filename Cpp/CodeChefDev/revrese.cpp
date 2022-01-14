#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		int num;
		cin>>num;
		int result = 0;
		while(num!=0)
		{
			int t;
			t = num%10;
			result = result*10 + t;
			num = num/10;
		}
		cout<<result<<endl;
	}
	return 0;
}