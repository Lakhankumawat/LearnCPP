/*
Protected Access Modifiers in C++
	Protected access modifiers are similar to the private access modifiers but protected access modifiers
 	can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class.
  

 	                       Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited            Not Inherited             Not Inherited              
Protected members           Protected                   Private                  Protected                    
Public members           	Public	                    Private                  Protected                    


-->If the class is inherited in public mode then its private members cannot be inherited in child class.
-->If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
-->If the class is inherited in public mode then its public members are public and can be accessed inside child class and outside the class.
-->If the class is inherited in private mode then its private members cannot be inherited in child class.
-->If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
-->If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
-->If the class is inherited in protected mode then its private members cannot be inherited in child class.
-->If the class is inherited in protected mode then its protected members are protected and can be accessed in child class.
-->If the class is inherited in protected mode then its public members are protected and can be accessed in child class.
*/
#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}


