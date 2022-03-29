// FCAI – Cairo University – 2022
// Program Name: km-algorithm.cpp
// Program Description: Knuth Morris Pratt Algorithm
// Last Modification Date: 29/03/2022
// Author: Nour El-Din Ahmed Hussein

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string kmAlgo(string& str, string& usrWord);

int main(){
    string str;
    string usrWord;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "\nEnter a word to check if it is in the string: ";
    cin >> usrWord;
    cout << kmAlgo(str, usrWord);
    return 0;
}

string kmAlgo(string& str, string& usrWord){
    istringstream iss(str);
    string strWord;
    bool isFound = false;
    while(iss >> strWord && !isFound){
        for(int i = 0; i < strWord.length(); i++){
            if(usrWord[i] != strWord[i]){
                break;
            }
            if(i == strWord.length() - 1){
                isFound = true;
            }
        }
    }
    if(isFound){
        return "found";
    }
    else{
        return "not found";
    }
}