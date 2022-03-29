/*
 - Author : Omar Amer
 - Last Modification : 29 March 2022
 - Problem description : Taking string input with spaces.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // The easiest way to take string input in C++ is by using getline(cin, Variable Name).  (<string> header)

    string str;
    
    cout << "Please enter a string with spaces: " << endl;
    getline(cin, str);
    cout << "The string is: " << str << endl;

}
