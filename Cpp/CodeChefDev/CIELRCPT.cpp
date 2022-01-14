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
		int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
		int num;
		cin>>num;
		int counter = 0;
		
		// for(int j = 0; j < 12; j++){
		// 	arr[j] = pow(2,j);

		// }

		int m = 11;
		while(num>0){
			counter += num/arr[m];
			num %= arr[m];
			m--;

		}
		cout << counter<<endl;
    }
  return 0;
}
