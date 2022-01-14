#include<bits/stdc++.h>

using namespace std;

int sum(int a, int b);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  if(t<=16 && t>=1){
	  for(int i = 0; i < t; i++)
	    {
	         int d,n;
	         cin >> d >> n;

	         if((d,n)<=10 && (d,n)>=1){
	         	sum(d,n);
	         }
	    }
}
  return 0;
}

//sum function
int sum(int a, int b){
	int sum1;
	for(int i=0; i<a;i++){
		sum1 = 0;
		while(b>0){
			sum1 += b;
			b--;
		}
		b = sum1;
	}
	cout << sum1 << endl;
	return 0;
}
