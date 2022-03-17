/*
Single Inheritance in C++
	Single inheritance is a type of inheritance in which a derived class is inherited with only one base class. 
	For example, we have two classes “employee” and “programmer”. If the “programmer” class is inherited from the 
	“employee” class which means that the “programmer” class can now implement the functionalities of the “employee”
 	class.
 */
#include<iostream>
using namespace std;
 class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}

