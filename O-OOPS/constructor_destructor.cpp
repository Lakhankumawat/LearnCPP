#include <iostream>
using namespace std;
#include <cstring>

class learncpp
{
    // declaring some variables
    int m, n;
    // declaring a pointer for dynamic allocation
    char *name;

public:
    // default constructor
    learncpp()
    {
        cout << "Default constructor called ! -------------------------" << endl << endl;
    };

    // Parameterized constructor
    learncpp(int a, int b, char *ch)
    {
        // initialising variables using parameters passed to constructor
        m = a;
        n = b;
        name = new char[strlen(ch) + 1];
        strcpy(name, ch);
        cout << "Parameterized constructor called !--------------------" << endl << endl;
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
        cout << "name = " << name << endl << endl;
    };

    // copy constructor
    learncpp(learncpp &obj) // argument in a copy constructor should be passed by reference.
    {
        // initialising variables using variables of object passed to constructor
        m = obj.m;
        n = obj.n;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
        cout << "Copy constructor called !-----------------------------" << endl << endl;
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
        cout << "name = " << name << endl << endl;
    };

    // destructor
    ~learncpp()
    {
        cout << "Destructor called !-----------------------------------" << endl;
        cout << "deleting name : " << name << "!" << endl << endl;
        if (name != NULL)
        {
            delete[] name; // deleting the memory allocated to name
            name = NULL;
        }
        
    };
};

int main()
{
    learncpp obj1;
    learncpp obj2(100, 200, "kalash");
    learncpp obj3(obj2);
    
    return 0;
}