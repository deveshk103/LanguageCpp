#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int n;
	cin >> t;
	for (int i=0; i<t; i++){
		cin>>n;

		/* This area calculates the sum of the entered value n*/
		int sum = 0; //after each loop, it sets the value again to zero so that previous sum is not being added to next
		while(n!=0){
			
			int m;
			m = n%10;
			sum += m;
			n = n/10;
			
		}

		cout << sum <<"\n";
	}
	
	return 0;
}