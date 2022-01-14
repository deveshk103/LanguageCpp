#include<bits/stdc++.h>

using namespace std;

void thankschef(void){
	cout << "Thanks for helping Chef!"<<endl;
}

int main()
{
	int t;
	cin >> t;

	if (t >= 1 && t <= 1000)
	{
		for (int i = 0; i < t; i++)
		{
			int n;
			cin >> n;

			if (n<=20 && n>= -20)
			{
				if (n<10){
					thankschef();
				}
				else{
					cout << "-1"<<endl;
				}
			}
		}
	}
	return 0;
}