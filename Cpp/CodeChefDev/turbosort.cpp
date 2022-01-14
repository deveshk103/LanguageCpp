#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	int arr[t];

	for(int i=0; i<t; i++){
		int num;
		cin>>num;

		arr[i] = num;
	}
	sort(arr,arr+t);
	for(int i=0; i<t; i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}