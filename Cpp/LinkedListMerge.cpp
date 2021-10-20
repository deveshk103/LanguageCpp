//mearging two linked list

//reffer to your own notes to understand properly whhat is happening
//basically you create 2 lists (of equal length here) and then
//mearge them one by one.

//E - Element 
//L - List

//mearged order is
//L1E1 > L2E1 > L1E2 > L2E2 ...

#include <iostream>

using namespace std;

struct mydat{
	int number;
	mydat *next;
};


int main (void){
	mydat *start1 = NULL;
	mydat *start2 = NULL;
	
	mydat *node1, *prev1;
	mydat *node2, *prev2;
	
	int c1=0, c2=0;
	
	int i;
	
	for(int i=0; i<5; i++){
		
		node1 = new mydat();
		c1=c1+1;
		
		cout << "Enter a number in list 1 ";
		cin >> node1->number;
		
		if(start1 == NULL){
			start1 = node1;
		}
		else{
			node1->next = NULL;
			prev1->next = node1;
		}
		prev1 = node1;
	} 
	
	for(int i=0; i<10; i++){
		
		node2 = new mydat();
		c2=c2+1;
		
		cout << "Enter a number in list 2 ";
		cin >> node2->number;
		
		if(start2 == NULL){
			start2 = node2;
			
		}
		else{
			node2->next = NULL;
			prev2->next = node2;
		}
		prev2 = node2;
	}
	
	mydat *store1;
	mydat *store2;
	
	node1 = start1;
	node2 = start2;

	for(;;){
		
		store1 = node1->next;
		node1->next = node2;
		
		store2 = node2->next;
		node2->next = store1;
		
		node1 = store1;
		node2 = store2;
		
		if(node1->next == NULL){
			node1->next = node2;
			break;
		}
		if(node2->next == NULL){
			node2->next = node1->next;
			node1->next = node2;
			break;
		}
	
	}
	
	
	for(node1 = start1; node1!=NULL; node1 = node1->next){
		cout << node1->number << endl;
	}
}
