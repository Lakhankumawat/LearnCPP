#include<bits/stdc++.h>
using namespace std;
class NumberClass
{
    int num;
public:
    NumberClass(int num = 0) { this->num = num; }
    void displayValues() { cout << num << "\n"; }

    //Overloading the prefix operator
    NumberClass operator++()
    {
        num++;
        //The object is returned AFTER incrementing
        return *this;
    }

    //Overloading the postfix operator
    NumberClass operator++(int)
    {
        NumberClass temp = *this;
        num++;
        //Note that the returned object contains the value pre-incrementing
        return temp;
    }
    //Similarly with decrementing operators
    NumberClass operator--()
    {
        num--;
        return *this;
    }

    NumberClass operator--(int)
    {
        NumberClass temp = *this;
        num--;
        return temp;
    }

    //Overloading the NOT operator to detect if the number equals zero
    bool operator !()
    {
        return (num==0);
    }
};
int main()
{
    NumberClass x(2), y(3),z;

    z = x++;
    cout<<"\nz = x++;";
    cout<<"\nz = ";z.displayValues();

    z = ++x;
    cout<<"\nz = ++x;";
    cout<<"\nz = ";z.displayValues();

    z = x--;

    cout<<"\nz = x--;";
    cout<<"\nz = ";z.displayValues();

    z = --x;

    cout<<"\nz = --x;";
    cout<<"\nz = ";z.displayValues();

    z = NumberClass(0);
    if(!z) cout<<"\nZ is equal to Zero\n";
}