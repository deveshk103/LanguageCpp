#include<iostream>
using namespace std;

struct dat {
	int number;
	dat *next;
};

int main (void){
	
	dat *start = NULL;
	dat *node;
	dat *prev;
	
	int i, c=0;
	for(i=0; i<5; i++){
		
		node = new dat();
		c = c+1;
		
		cout << "Enter a number ";
		cin >> node->number;
		
		if(start == NULL){
			start = node;
		}
		else{
			node->next = NULL;
			prev->next = node;
		}
		
		prev = node;
	}
	
	dat *one = new dat();
	cout << "Enter a number to be inserted ";
	cin >> one->number;
	
	prev = start;
	int flag = 0;
	
	for(node=start; flag==0 && node!=NULL; ){
		if(start->number >= one->number){
			one->next = node;
			start = one;
			flag = 1;
		}
		else if(node->number >= one->number){
			one->next = node;
			prev->next = one;
			flag=1;
		}
		prev = node;
		node = node->next;		
	}
	
	if(flag == 0){
		prev->next = one;
		one->next = NULL;
	}
	
	for(node = start; node!=NULL; node = node->next){
		cout << node->number << endl;
	}
	
}
