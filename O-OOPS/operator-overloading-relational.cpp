#include<bits/stdc++.h>
using namespace std;
class NumberClass
{
    int num;
public:
    NumberClass(int num = 0) { this->num = num; }
    void displayValues() { cout << num << "\n"; }

    bool operator== (const NumberClass& parameter)const
    {
        return (this->num == parameter.num);
    }

    bool operator!= (const NumberClass& parameter)const
    {
        return (this->num != parameter.num);
    }

    bool operator> (const NumberClass& parameter)const
    {
        return (this->num > parameter.num);
    }

    bool operator< (const NumberClass& parameter)const
    {
        return (this->num < parameter.num);
    }

    bool operator>= (const NumberClass& parameter)const
    {
        return (this->num >= parameter.num);
    }

    bool operator<= (const NumberClass& parameter)const
    {
        return (this->num <= parameter.num);
    }
};
int main()
{
    NumberClass x(2), y(3),z(4);
    cout<<"x = ";x.displayValues();
    cout<<"y = ";y.displayValues();
    cout<<"z = ";z.displayValues();

    if(x < y) cout<<"\nx < y\n";
    if(y == z) cout<<"y = z\n";
    if(y != z) cout<<"y != z\n";
    if(z >= x) cout<<"z > x\n";
    if(y >= x) cout<<"y >= x\n";
}
