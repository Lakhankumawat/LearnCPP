#include<iostream>
using namespace std;
 class Base //Base class created
{
    int data1; // private by default and is not inheritable by the base class
public:
    int data2; //public and can be inheritable
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void) //setData function sets the value of data members data1 and data2
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1() //getData1 function returns the value of data1
{
    return data1;
}

int Base::getData2() //getData2 function returns the value of data2
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically, therefore all the public members of base class will be inherited in public mode and all the private data members will not be inherited.
    int data3; //data3 is the private data member of derived class

public:
    void process();
    void display();
};

void Derived ::process() //process function will set the value of data3 as the product of data2 and data1 from the base class.
  //Since, data1 is a private member and cannot be inherited, therefore, we use getData1 function to get the value of Data1.
{
    data3 = data2 * getData1();
}

void Derived ::display() //display function displays the value of data1,data2 and data3. 
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData(); //Here, object of Derived class can call the member function of base class.
    der.process();
    der.display();

    return 0;
}
