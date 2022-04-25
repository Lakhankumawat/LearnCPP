//                                                           LearnCPP
//                                              VIRTUAL FUNCTIONS IN C++ #1237

//******************************************************  START OF THE PROGRAM  ****************************************************
// Header Files Used

#include <iostream>
#include <conio.h>

using namespace std;
//-------------------------------------------- CREATING CLASSES ----------------------------------------------------------------------

// Creating a Base/Parent Class "A"

class A
{
public:               // Anyone can access the member function of public class A
                      // "virtual" keyword is used to tell compiler for Late Binding
    virtual void f1() // Method Overriding
    {
        cout << "You are in f1 of class A" << endl; // Prints text of class A
    }
};

// Derived/Child Class "B"

class B : public A // Visibility Mode = public i.e any object of class B can access member functions
{
public:
    void f1() // Method Overriding
    {
        cout << "You are in f1 of class B" << endl; // Prints text of class B
    }
};
//------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- MAIN FUNCTION -------------------------------------------------------------------------

int main()
{
    A *p, obj1; // Pointer is created as object of class A
    B obj2;     // obj2 is created as object of class B
    p = &obj2;  // Pointer points to object of class B
    p->f1();    // f1() function of object B will run due to concept of late binding
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------
//*******************************************************  END OF THE PROGRAM  ********************************************************

//--------------------------------------------------------- ! ! THANK YOU ! ! ---------------------------------------------------------