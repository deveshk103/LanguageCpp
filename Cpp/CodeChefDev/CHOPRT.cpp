#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	if(t<=10000 && t>=1)
	{
		for(int i=0; i<t; i++)
		{
			int n1,n2;
			cin >> n1 >> n2;

			if((n1,n2)<=1000000001 && (n1,n2)>=1)
			{
				if(n1>n2){
					cout<<">"<<endl;
				}
				else if(n2>n1){
					cout<<"<"<<endl;
				}
				else if(n1=n2){
					cout<<"="<<endl;
				}
				
			}
		}
	}
	return 0;
}