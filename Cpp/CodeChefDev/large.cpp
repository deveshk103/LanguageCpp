#include<iostream>
using namespace std;
int main()
{
	int n,k;
	int inputs;
	cin>>n>>k;
	int count = 0;
	for(int i=1;i<=n;i++){
		cin>>inputs;

		if(inputs%k == 0){
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}