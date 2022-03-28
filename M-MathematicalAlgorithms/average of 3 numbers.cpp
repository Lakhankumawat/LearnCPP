/*
Program: add average of 3 numbers
Author: Salma Abdelaziz
Version: 1.0
Date: 28/3/2022
*/
#include <iostream>

using namespace std;
int main()
{
 int num1, num2, num3;
 cout << "Please enter 3 numbers to give the average of them: " << endl;
 cin >> num1 >> num2 >> num3;
 double average = (num1 + num2 + num3)/3.0;
 cout << "The average of 3 numbers is = " << average << endl;

    return 0;
}
