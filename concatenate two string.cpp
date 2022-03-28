#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char first[] = " ";
    char second[] = " ";
    string all;
    
    cout<<"Enter the first string: "<<endl;
    cin>>first;
    cin.ignore();
    cout<<"Enter the second string: "<<endl;
    cin>>second;

    all = strcat(first,second);
    cout<<all;
    




    return 0;
}