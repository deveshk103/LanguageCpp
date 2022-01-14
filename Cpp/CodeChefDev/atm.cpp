#include<iostream>
#include<cmath>
using namespace	std;	
int main()
{
	int amt; float balance;
	cin>>amt;
	cin>>balance;
	cout<<endl;
	if(amt%5==0 && balance>=amt+0.50){
		printf("%.2f", (balance-amt-0.50));
	}
	else{
		cout<<balance<<endl;
	}
	return 0;
}
