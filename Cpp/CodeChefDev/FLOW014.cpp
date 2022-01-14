/*
A certain type of steel is graded according to the following conditions.

Hardness of the steel must be greater than 50
Carbon content of the steel must be less than 0.7
Tensile strength must be greater than 5600
The grades awarded are as follows:

Grade is 10 if all three conditions are met
Grade is 9 if conditions (1) and (2) are met
Grade is 8 if conditions (2) and (3) are met
Grade is 7 if conditions (1) and (3) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the three conditions are met
Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three numbers hardness, carbon content and tensile strength of the steel.

Output
For each test case, print Grade of the steel depending on Conditions, in a new line.

	Constraints
	1 ≤ T ≤ 1000
	0 ≤ hardness, carbon content, tensile strength ≤ 10000
	
	Sample Input
	3 
	53 0.6 5602
	45 0 4500
	0 0 0 
	
	Sample Output
	10
	6
	6
*/


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
      int hard,ts;
      float cc;  
      cin >> hard >> cc >> ts;
      if (hard > 50 && cc < 0.7 && ts >5600){
      		cout << 10 << endl;
      } 
      else if(hard > 50 && cc < 0.7){
      		cout << 9 << endl;
      }
      else if(cc < 0.7 && ts >5600){
      	cout << 8 << endl;
	  }
      else if(hard > 50 && ts >5600){
      	cout << 7 << endl;
      }
      else if (hard > 50 || cc < 0.7 || ts >5600){
      	cout << 6<< endl;
      }
      else{
      	cout << 5 << endl;
      }
    }
  return 0;
}
