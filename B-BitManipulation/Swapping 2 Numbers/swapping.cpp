#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1 ,num2;
    cout<<"Enter 2 number :"<<endl;
    cin>>num1>>num2;

//Swapping using XOR opeartion
    num1=num1^num2;
    num2=num1^num2; 
    //  num2= num1^num2=num1^num2^num2= num1
              
    num1=num1^num2; 
    //num1 = num1^num2= (num1^num2)^num2= num1

cout<<"elements after swapping -> "<<"1st number= "<<num1<<" "<<", 2nd number= "<<num2<<endl;

}

/* Output:
Enter 2 number :
10
20
elements after swapping -> 1st number= 20 , 2nd number= 10
*/