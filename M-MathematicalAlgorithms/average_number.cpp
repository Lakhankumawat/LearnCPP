#include <iostream>
using namespace std;

int main(){

    int n1, n2 ,n3 ,sum ;
    float average;

    cout<<"please enter the 3 numbers that you want: " ;
    
    cin>>n1>>n2>>n3 ;

    sum = n1 + n2 + n3;

    average = sum/3;

    cout<<"the average is "<<average;

    return 0;
}