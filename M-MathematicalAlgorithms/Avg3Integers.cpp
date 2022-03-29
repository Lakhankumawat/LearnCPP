#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, avg;
    
    cout << "Enter Integer 1: ";
    cin >> num1;
    cout << "Enter Integer 2: ";
    cin >> num2;
    cout << "Enter Integer 3: ";
    cin >> num3;
    avg = (num1 + num2 + num3) / 3;

    cout << "Average = " << avg;

}