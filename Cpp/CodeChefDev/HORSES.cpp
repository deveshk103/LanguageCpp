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
        int n;
        cin>>n;

        int num[n];
        int sub = 0;
        for(int j=0; j<n;j++){
        	cin>>num[i];

        }
        sort(num,num+n);
        for(int m=0;m<t;m++){
        	sub = num[1]-num[0];
        }
        cout<<sub<<endl;
    }
  return 0;
}
