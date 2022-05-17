#include <iostream>
using namespace std;
#include <math.h>
 
int checkNeon(int x)
{
    // storing x^2 in a variable called square
    int square = x * x;
 
    // calculating the squared sum of digits 
    int sum_digits = 0;
    while (square != 0) {
        sum_digits = sum_digits + square % 10;
        square = square / 10;
    }
    return (sum_digits == x);
}
 
// Sample Code
int main(void)
{
    int i; 
    cout << "Give the number you want to check: "; // Type a number and press enter
    cin >> i; // Get user input from the keyboard
        if (checkNeon(i))
            cout <<"It is an Armstrong Number" << " ";   
        else
            cout <<"It is not an Armstrong Number" << " ";
            
            }