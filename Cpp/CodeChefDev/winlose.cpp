/* ................
	author: deveshk103
   .................
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	int i=0;
	cin>>t;
	
	int result;
	int margin[t];
	int winner;
	// int maximum;
	int si,ti;
	
	for(i=0;i<t;i++)
	{
		
		cin>>si>>ti;

		if(si>=ti){
			margin[i] = si - ti;
			cout<<"1 "<<margin[i]<<endl;

		}
		else{
			margin[i] = ti-si;
			cout<<"2 "<<margin[i]<<endl;
		}
		
	
 }
 	for(i = 0; i<t; i++){

	 	if(margin[0] < margin[i]){
	 		margin[0] = margin[i];
	 	}

 	}
 	cout << margin[0];

 	// for(i = 0; i<t; i++){
 	// 	if(si-ti == margin[0]){
 	// 		cout<<"1 "<<margin[0]<<endl;
 	// 	}
 	// 	else if(ti-si == margin[0]){
 	// 		cout<<"2 "<<margin[0]<<endl;
 	// 	}
 	// }

	return 0;
}