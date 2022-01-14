#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  for(int i = 0; i < t; i++)
    {
		int denominations[6] = {1,2,5,10,50,100};
		int num;
		cin>>num;
		int counter = 0;
	
		int m = 5;
		while(num>0){// num 242
			counter += num/denominations[m]; // 242/100 = 2 || 
			num %= denominations[m];	//242%100= 42
			m--;

		}
		cout << counter<<endl;
    }
  return 0;
}
