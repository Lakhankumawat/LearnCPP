/*--------------------The program for calculating GCD and LCM by using the recursive method-------------------------*/

#include <iostream>
using namespace std;

/*-------------Recursive method for the calculation of GCD----------------------------*/
int calculateGCD(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b){
    return ((a * b) / calculateGCD(a, b));
}


int main(){
    int a, b;

    /*------------Taking the inputs from the user --------------------*/
    cout << "Enter the two numbers : " << endl;
    cin >> a >> b;

    /*------------Calling the methods and printing their results-----------------*/
    cout << "The GCD of two numbers is : " << calculateGCD(a, b) << endl;
    cout << "The LCM of two numbers is : " << calculateLCM(a, b) << endl;
 
    return 0;
}