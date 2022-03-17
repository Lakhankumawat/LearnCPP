 // Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
/*
--> Default visibility mode is private
--> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
--> Private Visibility Mode: Public members of the base class become private members of the derived class
--> Private members are never inherited
*/
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee Sanya(1), Tanisha(2);
    cout << Sanya.salary << endl;
    cout << Tanisha.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
