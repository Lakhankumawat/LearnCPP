#include<iostream>
using namespace std;
int main()
{
    int p, d, t;
    cout << "Enter price: ";
    cin >> p;
    cout << "Enter discount: ";
    cin >> d;
    cout << "Price: " << p << ", Discount: " << d << "%" << endl;
    t = p*d/100;
    cout << "Price after discount: " << t << endl;
}