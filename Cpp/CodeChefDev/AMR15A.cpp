#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int arr[t];
  int i;
  int even = 0, odd = 0;
  for(i = 0; i < t; i++)
    {
         cin>>arr[i];

         if(arr[i]%2 == 0){
         	even++;
         }
         else{
         	odd++;
         }
     }

    if(even > odd){
        cout << "READY FOR BATTLE"<<endl;
    }
    else{
        cout << "NOT READY"<<endl;
        }

  return 0;
}
