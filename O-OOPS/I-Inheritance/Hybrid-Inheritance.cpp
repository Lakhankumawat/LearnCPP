#include <iostream>  
using namespace std;  
class vehicle  //vehicle class (base class) created
{  
public:  
vehicle()  //constructor of vehicle class
    {  
cout<< "This is a vehicle\n";  
    }  
};  
class Car: public vehicle  //class Car(derived from vehicle/base class via Single Inheritance) created
{  
public:  
Car()  //constructor of car class
    {  
cout<< "This is a car\n";  
    }  
};  
class Racing  //Racing class created
{  
public:  
Racing()  //constructor of racing class
    {  
cout<< "This is for Racing\n";  
    }  
};  
class Ferrari: public Car, public Racing  //Ferrari class (derived from both Car and Racing class via Multiple Inheritance) created
{  
public:  
Ferrari()  //constructor of ferrari class
    {  
cout<< "Ferrari is a Racing Car\n";  
    }  
  
};  
int main() {  
    Ferrari f;  //Object of class Ferrari class will call the constructors of all parent classes and their parent classes as well.
    return 0;  
}  
