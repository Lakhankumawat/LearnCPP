/* String Palindromr code */
#include <bits/stdc++.h>
using namespace std;

/* Function to test whether a string is palindrome or not */
bool isPalindrome(string S)
{
    if (S.length() <= 1)
    {
        return true;     // if length of string is 1 or 0 it will be palindrome for sure
    }

    // if length of string is more than one we will iterate over a loop 
    for (int i = 0; i < S.length() / 2; i++)
    {
        if (S[i] != S[S.length() - i - 1])  // checking characters from first and last of string
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Enter the string:" << endl; // Input string
    string s;
    cin >> s;

    bool ans = isPalindrome(s);         // function call to check a string is palindrome or not
    if(ans){
        cout << "True" << endl;         // true if palindrome
    }else{
        cout << "False" << endl;        // false if not palindrome
    }
}

/*
Input:
1. "abba"
2. "abc"
3. "abccad"
Output:
True
False
False

Explanation:
1. abba is a palindrome
2. abc is not a palindrome
3. abccad is not a palindrome
*/