#include <iostream>
using namespace std;

double factorial (double x){
    if(x<=1){
        return 1; //if x is zero or less than zero
    }else{
        return x*factorial(x-1); // call function for recursion while return 1
    }
}
int main(){
int x;
cout << "please enter a number:"<<endl;
cin>> x;

cout<< factorial(x);

}