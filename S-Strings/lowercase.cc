#include<iostream>
#include<string>
using namespace std;
int main()
{   string key1, key2;
    char ch;
    cout<<"enter a statement to convert it into a lowercase "<<endl;
    getline(cin,key1);
    for (int i=0; i<key1.length(); i++){
        ch=tolower(key1[i]);
        key2=key2+ch;
    }
    cout<<key2;
    return 0;
}
