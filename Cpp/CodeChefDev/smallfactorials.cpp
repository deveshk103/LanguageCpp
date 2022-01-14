#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	if (t >= 1 && t <= 1000)
	{
		for (int i = 0; i < t; i++)	//constraint 1
		{
			int num;
			cin >> num;

			long long int factorial = 1;
			if (num <= 20 && num >= 0)
			{
				//constraint 2
				for (int j = 1; j <= num; j++)
				{
					factorial *= j;	//factorial calculation
				}

				cout << factorial << endl;
			}
		}
	}

	return 0;
}