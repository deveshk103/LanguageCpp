#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  int n;
  for(int i = 0; i < t; i++)
    {
      
      cin >> n;
      int b = n;
      int ans, reverse = 0;
      while(b!=0){
      	ans = b%10;
      	reverse = reverse*10 + ans;
      	b /= 10;
      }   
      
      if(reverse == n){
      	cout<<"wins"<<endl;
      }
      else{
      	cout<<"loses"<<endl;
      }
    }
  return 0;
}
