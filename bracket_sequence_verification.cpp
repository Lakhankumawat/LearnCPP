#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    //stack that stores brackets
    stack<char>bracket;
    //boolean value that checks if an answer has already been found
    bool found_answer = false;
    string bracket_sequence{};
    cout<<"Please Enter bracket sequence"<<endl;
    getline(cin,bracket_sequence);
    for(int i = 0;i<bracket_sequence.size();i++){
        if(bracket_sequence[i]==')'){
            if(bracket.empty()){
                cout<<"Invalid Sequence"<<endl;
                found_answer = true;
                break;
            }else{
                //if it's a right bracket remove a left one
                bracket.pop();

            }
        }else if(bracket_sequence[i]=='('){
            bracket.push('(');
        }else{
            cout<<"Invalid Sequence"<<endl;
            found_answer = true;
        }
    }
    //found answer, do not give output on sequence again
    if(!found_answer) {
        if (bracket.empty()) {
            cout << "Valid Sequence" << endl;
        } else {
            cout << "Invalid Sequence" << endl;
        }
    }
}
