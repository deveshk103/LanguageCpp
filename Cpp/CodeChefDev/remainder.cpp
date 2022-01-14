#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n;i++){
		int n1,n2;
		cin >> n1 >> n2;

		int rem;
		rem = n1%n2;
		cout<<rem<<endl;
	}
	return 0;
}
