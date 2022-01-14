#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main(){
	int t;
	cin>>t;
	
	if(t>=1 && t<=100){

	for(int i=1; i<=t; i++){
		int num;
		cin>>num;
		
		if (num>=1 && num<=100){
			//using boost library cpp_int lets you get int to upto 128 bit precision
			cpp_int factorial=1; 
			for(int j=num; j>=1; j--){
			factorial *= j;
			}	
		cout<<factorial<<endl;
		}

	}

 }
	return 0;
}
