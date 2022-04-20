#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double sale,aftersale;
    double price;
    cin >> sale >> aftersale;
    price = aftersale/((100-sale)/100);
    cout <<fixed << setprecision(2) << price;

}
