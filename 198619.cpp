// Compact  program to check Palindrome
// It uses  C++ strings
// Author   Mohammad El-Ramly
// Date:    13 March 2022
// Version: 1.0

#include<iostream>
#include <algorithm>    // remove, reverse
#include<string>        // C++ String: erase

using namespace std;

int main(){
   string str, rev_str;
   cout << "Pls enter a string of max 80 characters: ";
   getline (cin, str);

   // remove - erase
   auto iter = remove(str.begin(), str.end(), ' ');
   str.erase(iter, str.end());

   rev_str = str;
   reverse(rev_str.begin(), rev_str.end());

   cout << "It is" << ((str != rev_str) ? " not" : "");
   cout << " Palindrome\n" << endl;
}
