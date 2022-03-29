// levenshtein distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
    string text, edited_text;
    int count = 0;
    cout << "Welcome to levenshtein distance !\n";
    cout << "Please enter the original text:";
    cin >> text;
    cout << endl;
    cout << "please enter the edited text:";
    cin >> edited_text;
    for (int i = 0; i < edited_text.length(); i++) { 
        if (text[i] != edited_text[i]) { count++; } // count is the number of edits
                                             
    }
    cout << "number of edits:" << count;

}

