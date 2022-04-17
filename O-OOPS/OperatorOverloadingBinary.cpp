#include <bits/stdc++.h>
using namespace std;
class NumberClass{
    int num;
public:
    NumberClass(int num = 0){this->num = num;}
    void displayValues(){cout<<num<<"\n";}

    /*Overloading the Binary Operators:
        * This Operator returns a NumberClass Object
        * A temp variable is used to store results to avoid changing one of the two parameters*/
    NumberClass operator+ (const NumberClass& paramClass) const
    {
        NumberClass result;

        result.num = this->num + paramClass.num;
        return result;
    }

    NumberClass operator- (const NumberClass& paramClass) const
    {
        NumberClass result;

        result.num = this->num - paramClass.num;
        return result;
    }

    NumberClass operator* (const NumberClass& paramClass) const
    {
        NumberClass result;

        result.num = this->num * paramClass.num;
        return result;
    }
    NumberClass operator/ (const NumberClass& paramClass) const
    {
        NumberClass result;

        result.num = this->num / paramClass.num;
        return result;
    }

    /* Note:
        * The Operation does not have to simulate a binary Operation, as it is used for concatenation in String
        * We can pass an int or float parameter for the binary operation instead of an object (see below)*/
    NumberClass operator*(const int& multiParam)const
    {
        NumberClass result;

        result.num = this->num * multiParam;
        return result;
    }

    /*Note:
        * We can overload a binary operator to allow a number to be multiplied by an object as follows:
            * NumberClass z = 2 * x
        * In this case, this is not a member function, as it is not called by an object
        * It is declared as a friend function to have access to the private members of the class*/
    friend NumberClass operator*(const int& num, const NumberClass& paramClass)
    {
        NumberClass result;
        result.num = num * paramClass.num;
        return result;
    }
};

int main()
{
    NumberClass X(6), Y(2), Z;
    cout<<"Class X = "; X.displayValues();
    cout<<"Class Y = "; Y.displayValues();

    //Note: Adding two Classes:
    Z = X + Y;
    cout<<"\nX + Y = "; Z.displayValues();

    Z = X - Y;
    cout<<"\nX - Y = "; Z.displayValues();

    Z = X * Y;
    cout<<"\nX * Y = "; Z.displayValues();

    Z = X / Y;//note: this is integer division
    cout<<"\nX / Y = "; Z.displayValues();

    Z = X * 4;
    cout<<"\nX * 4 = "; Z.displayValues();

    Z = 3 * X;
    cout<<"\n3 * X = "; Z.displayValues();
}
