#include <iostream>
#include <string>
using namespace std;
string odd_or_even(){
    cout<<"enter the number"<<endl;
    int x;
    cin >>x;
    if(x%2==0){
        return "even";
    }
    else
    {
        return "odd";
    }
}
int main(){
    cout<<odd_or_even()<<endl;
}