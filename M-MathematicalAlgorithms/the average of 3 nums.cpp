#include <iostream>

using namespace std;

int main(){
    float num1, num2, num3, sum, avrg;
    cout<<"this programme will caculate the average of three numbers\n";
    cout<<"please enter your numbers\n";
    cout<<"number 1: ";
    cin>>num1;
    cout<<"number 2: ";
    cin>>num2;
    cout<<"number 3: ";
    cin>>num3;
    sum = num1+num2+num3;
    avrg = sum / 3;
    cout<<"the averge of these numbers is: "<<avrg;

    return 0;
}
