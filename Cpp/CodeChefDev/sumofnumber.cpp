#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a = 0;
	int sum = 0;
	cin>>n;
	while(n!=0){
		a = n%10;
		sum +=a;
		n = n/10; 
	}
	cout<<sum;
}