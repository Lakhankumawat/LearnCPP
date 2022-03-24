#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Declare the first number, second number and third number
    int num1,num2,num3;
    cout<<"Please, Enter the the first number, second number and third number : "<<endl;
    // Enter the first number, second number and third number
    cin>>num1;
    cin>>num2;
    cin>>num3;
    //compare the first number, second number and third number
    // then print the max number
    if (num1>num2 && num1>num3)
        {
            cout<<"The max number is :"<<num1<<endl;
        }
    else if (num2>num3 && num2>num1)
        {
            cout<<"The max number is :"<<num2<<endl;

        }
    else
        {
            cout<<"The max number is :"<<num3<<endl;
        }




}


