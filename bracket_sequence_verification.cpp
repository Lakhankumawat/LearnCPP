#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    stack<char>bracket;
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
                bracket.pop();

            }
        }else if(bracket_sequence[i]=='('){
            bracket.push('(');
        }else{
            cout<<"Invalid Sequence"<<endl;
            found_answer = true;
        }
    }
    if(!found_answer) {
        if (bracket.empty()) {
            cout << "Valid Sequence" << endl;
        } else {
            cout << "Invalid Sequence" << endl;
        }
    }
}
