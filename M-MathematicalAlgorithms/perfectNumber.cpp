/*
program: Perfect Number
author: Ahmed M. Hany
date: 17-3-2022
version: 1.0
*/
#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> divisors;
    int num,sum=0;

    //Take a number to check
    cout<<"Please enter a number to check if perfect number or not: ";
    cin>>num;

    //start from 1 to the number to check the divisors
    for (int i = 1; i < num; i++)
    {
        if (num%i==0) // if the mod equal 0 then add to divisors list
        {
            divisors.push_back(i);
        }  
    }

    //get the sum of divisors 
    for (list<int>::iterator i = divisors.begin(); i != divisors.end(); i++){
        sum += *i;
    }
    
    if (sum == num) // if sum equal number then it is a perfect number
    {
        cout<<num<<" is a perfect number\n";
    }else{
        cout<<num<<" is not a perfect number\n";

    }
    
    
}