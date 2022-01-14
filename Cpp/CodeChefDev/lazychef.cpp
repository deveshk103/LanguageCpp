#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin	>> t;

	for(int i = 0; i < t; i++)
	{
		int x,m,d;
		cin >> x >> m >> d;

		int result;
		if(x<=10 && x>=1){
			if(m<=10 && m>=1){
				if(d<=100 && d>=0){
					result = min(x*m, x+d);
					cout << result << endl;
				}
			}
		}
		
	}
	return 0;
}