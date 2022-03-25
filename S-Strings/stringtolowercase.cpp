#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text;
    cout<<"Enter your text you want to convert to lowe case: ";
    getline(cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
    cout<<text<<endl;

    return 0;
}
