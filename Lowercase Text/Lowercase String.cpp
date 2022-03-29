#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string text;
    cout<<"Enter Text:";
    getline(cin,text);
    for(int i = 0;i<text.length();i++){
        if(islower(text[i])){
            continue;
        }
        else
            text[i] = tolower(text[i]);
    }
    cout<<"Lowercased Text :"<<text;
}