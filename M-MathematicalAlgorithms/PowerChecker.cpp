/*
 * Author: Mohamed Rady
 * Contact: mails.mail.mm@gmail.com
 * Program Name: Power Checker
 * Program Description: Check if m is a power of n
 * Last Modification Date: 22 Mar 2022
 * Version: 1.0
*/
#include<bits/stdc++.h>

using namespace std;

/* Take log of a number to the base of base
 * This can be done by taking the quotient of
 * log base 10 of the number divided by log base 10 of the base.
 */
double logBase(double base, double number) {
    return (log(number)/log(base));
}

int main() {
    int number, base;

    //Take a number and a base as input
    cout << "Enter a number (m) to check if it is a power of (n)"
            "\nIf not, largest number smaller than m that is a power of n will be printed.\n(M N):";
    cin >> number >> base;

    //Calculate the log of the number to the specified base
    double logResult = logBase(base, number);

    //If the logResult is a whole number (No fractions), then print yes.
    //Else, print no and floor the logResult to the nearest integer,
    //and get the base raised to the floored logResult.
    if (logResult == (int) logResult)
        cout << "Yes";
    else
        cout << "No\n" << pow(base, (int) logResult);
}