/*
author: Ziad Nasser.
contact:zaidnasser997@gmail.com
description: this is a program to show the multiplication table for the user.
last modification:28/3/2022
version:1.0
*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
 int number;
 cout<<"enter your number: ";
 cin>>number;

 cout<<"--------------- \n";
 for(int i = 1;i<=12; i++){
     cout<<number<< setw(4)<<"x"<<i<<" |  "<<number* i<<"\n";
 }
cout<<"--------------- \n";
}
