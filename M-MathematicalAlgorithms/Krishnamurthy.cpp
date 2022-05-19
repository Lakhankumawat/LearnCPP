#include <bits/stdc++.h>
using namespace std;
 
// Calculating factorial of a Single Number
int factorial(int i)
{
    int fact = 1;
    while (i != 0) {
        fact = fact * i;
        i--;
    }
    return fact;
}
 
// Checking that a number is KrishanaMurthy Number or not
bool Krishnamurthy(int i)
{
    int sum_of_factorials = 0;
    int tmp = i;
    while (tmp != 0) {
        // Extracting last digit , Calculating its factorial and then summing them down
        sum_of_factorials += factorial(tmp % 10);
 
        // Removing the last digit by dividing the variable by 10
        tmp = tmp / 10;
    }
 
    // Condition for a number to be Krishnamurthy 
    return (sum_of_factorials == i);
}
 
// Driver code
int main()
{
    int i; 
    cout << "Give the number you want to check: "; // Type a number and press enter
    cin >> i; // Get user input from the keyboard

    if (Krishnamurthy(i))
        cout << "It is a KrishnaMurthy Number";
    else
        cout << "It is not a KrishnaMurthy Number";
    return 0;
}