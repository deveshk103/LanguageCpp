/* A Valid triangle */
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	if(t<=1000 && t>=1)
	{
		for(int i=0; i<t; i++)
		{
			int a,b,c;
			cin >> a >> b >> c;

			if((a,b,c)<=180 && (a,b,c)>=1)
			{
				if((a+b+c) == 180){
					cout << "YES"<<endl;

				}
				else{
					cout << "NO"<<endl;
				}
			}

		}
	}
	return 0;
}