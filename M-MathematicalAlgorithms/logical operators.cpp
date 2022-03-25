//author:Mariam Moutaz Mohamed Mounir elgohary
// this will show you how to use the logical operators in c++
#include<iostream>
using namespace std;
int main()
{/*this will show how to use and operator its symbol is&& in c++
   , or operator  its symbol is || in c++ and not operator its symbol is ! in c++      */
	int x = 5;
	int y = 3;
	
	
	//the first statement is false 0 and the second statement is true 1 so output will be 1&&0= 0
	cout << (x == y && x > y)<<endl;
	
	cout << (x == y || x > y)<<endl;// THe output will be 1||0= 1
	cout << !(x == y)<<endl;//the statement is false but output will be 1 notfalse =true
} 