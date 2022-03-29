/*
     Purpose: a program that checks whether a given number is perfect
     Author: Rawan Abdelrahman
     Date: 29/3/2022
*/

#include <bits/bits-stdc++.h>


using namespace std;


int main() {
    int num;
    cin >> num;
    // loops over all numbers less than the input number
    int sum = 0;
    for (int i = 0; i < num; i++) {
        // checks if number is divisble
        if (num % i == 0) {
            sum += i; // add the divisor to the sum
            
        }
    }
    
    if (num == sum) {
        cout << "The number is perfect \n";
    }
    else {
        cout << "The number is not perfect \n";
    }
    return 0;
}

