/*
Ambiguity Resolution in Inheritance
	Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there 
	are chances that the base classes have functions with the same name.
	So it will confuse derived class to choose from similar name functions. 
	To solve this ambiguity scope resolution operator is used “::”. 
*/
#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};
int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

    return 0;
}

