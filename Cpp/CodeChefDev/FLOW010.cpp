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
        char a;
  		cin >> a;

	  if(a == 'b' || a == 'B'){
	  	cout << "BattleShip"<<endl;
	  }
	  else if(a == 'c' || a == 'C'){
	  	cout << "Cruiser"<<endl;
	  }
	  else if(a == 'd' || a == 'D'){
	  	cout << "Destroyer"<<endl;
	  }
	  else if(a == 'f' || a == 'F'){
	  	cout << "Frigate"<<endl;
	  }
  	}
  return 0;
}
