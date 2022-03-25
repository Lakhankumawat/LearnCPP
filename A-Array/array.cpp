
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cipher(){
    string alpha ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string s;
    int a,b,x;
    cout<<"Please enter the string you would like to encrypt : "<<endl;
    cin.clear();
    cin.sync();
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<"Please enter parameters : "<<endl;
    cin>>a>>b;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')cout<<' ';
        for(int j=0;j<26;j++){
            if (s[i]==alpha[j]){
                x=(a*j+b)%26;
                for(int k=0;k<26;k++){
                    if(x==k){
                        cout<<alpha[k];
                        break;

                    }
                }
            }
        }

    }
}
void decipher() {
    string alpha = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                    'U', 'V', 'W', 'X', 'Y', 'Z'};
    string s,str="";
    int  b, c, x;

    cout << "Please enter the string you would like to decrypt : "<<endl;
    cin.clear();
    cin.sync();
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Please enter parameters : "<<endl;
    cin >> c >> b;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')str+=' ';
        for (int j = 0; j < 26; j++) {
            if (s[i] == alpha[j]) {
                x = c * (j - b);
                x = (((x % 26) + 26) % 26);
                for (int k = 0; k < 26; k++) {
                    if (x == k) {
                       str+=alpha[k];



                    }
                }


            }
        }

    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;
}
int main() {
    string answer;

    while (true) {
        cout<<"\n please enter a number 1,2,3 "<<endl;
        cin >> answer;

        while (answer != "1" && answer != "2" && answer != "3") {
            cout << "the input is invalid " << endl;
            cin >> answer;
        }
        if (answer == "1") {
            cipher();
        } else if (answer == "2") {
            decipher();
        } else if (answer == "3") {
            break;
        }

    }
}