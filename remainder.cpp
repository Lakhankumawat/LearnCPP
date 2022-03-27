#include <iostream>
using namespace std;
int main(){
    int dividend;
    int divesor;
    int remainder;
    cout<<"enter the first number(divedend): "<<endl;
    cin>>dividend;
    cout<<"enter the second number(divesor): "<<endl;
    cin>>divesor;
    remainder = dividend % divesor;
    cout<<"the remainder is: "<<remainder;
    return 0;
}