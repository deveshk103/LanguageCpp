#include<bits/stdc++.h>

using namespace std;

int check(int n){
	int requiredTurns = 0;
	int j;
	if(n%10 == 0){
         	cout<<0<<endl;
         }
    else{
         	for(j=1; j<11; j++){//10 to 100 then got -1
         		if(n*j %10 == 0){
         			requiredTurns = j;
         			if(j>= 10){
         				cout<<"-1"<<endl;
         			}
         			else{
         				cout<<requiredTurns<<endl;	
         			}
         			
         			break;
         		}
         	}
         }
}

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
        // cout<< check(n) << endl;
         check(n);
    }
  return 0;
}
