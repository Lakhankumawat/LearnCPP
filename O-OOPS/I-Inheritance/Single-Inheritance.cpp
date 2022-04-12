
#include<iostream>
using namespace std;
 class Base    //Base class is created
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void) //setData function will set the values of data members: data 1 and data 2
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()// getData1 will return the value of data member data1
{
    return data1;
}

int Base::getData2()// getData2 function will return the value of data member data2
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically by using the keyword public
// Derived class will have all the properties of base class along with its properties
    int data3;

public:
    void process(); 
    void display();
};

void Derived ::process() //process class is used to set the value of data3 as the product of data2 and data1 from the base class. Since, only public members are inherited
  //here, therefore in order to get the value of data1 we use the function getData1(which is public and returns the value of Data1).
{
    data3 = data2 * getData1();
}

void Derived ::display()
{   //display function is used to cout the values of data1, data2 and data3.
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();//object of derived class calling the member function of base class.
    der.process();
    der.display();

    return 0;
}

