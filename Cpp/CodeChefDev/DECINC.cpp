#include<bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  	if(t<=1000 && t>=0)
	  {
	  	if(t%4 == 0){
	  	  	t++;
	  	  }
	  	  else{
	  	  	t--;
	  	  }
	  	  cout << t;
	  }

  return 0;
}
