#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[3];
	float result;
	for(int i=0;i<t;i++)
	{	int j;
		for(j=0; j<3;j++){
			
			cin>>arr[j];
		}
		sort(arr,arr+j);
		cout<<arr[1]<<endl;

	
	}

	return 0;
}