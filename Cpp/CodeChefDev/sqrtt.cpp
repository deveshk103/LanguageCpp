#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	float result;
	for(int i=0;i<t;i++)
	{
		int num;
		cin>>num;

		result = sqrt(num);
		result = round(result);
		cout<<result<<endl;
	}

	return 0;
}