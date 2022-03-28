/*
 * 
 * This code is a contribution in "LearnCPP"
 * Description: This code converts an input string to MiXeDcAsE letters.
 * Author: Youssef Moataz
 * Last modified: March 28, 2022
 * Version: v1.0.0
 * 
 */

#include <iostream>

using namespace std;

int main() {
    string text;

    getline(cin, text);

    for (int i = 0; i < text.length(); ++i) {

        if (i % 2 == 0){
            text[i] = toupper(text[i]);
        }else{
            text[i] = tolower(text[i]);
        }

    }

    cout << text;

    return 0;
}
