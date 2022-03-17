
/*
Constructors in Derived Class in C++
-->We can use constructors in derived classes in C++
-->If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
-->But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
-->If both base and derived classes have constructors, base class constructor is executed first

Special Syntax
-->C++ supports a special syntax for passing arguments to multiple base classes
-->The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
-->The body is called after the constructors is finished executing

Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)

/*
/*

ORDER OF EXECUTION:

Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};
int main(){
    Derived sanya(1, 2, 3, 4);
    sanya.printDataBase1();
    sanya.printDataBase2();
    sanya.printDataDerived();
    return 0;
}

