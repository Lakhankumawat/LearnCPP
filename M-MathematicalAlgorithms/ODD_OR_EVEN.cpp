#include<iostream>
using namespace std;

int main() {
    int number;
    cout<< "Please, enter a number to check if it's odd or even: ";
    cin >> number;
    if (number % 2 == 0) cout << "EVEN";
    else cout<< "ODD";
}
