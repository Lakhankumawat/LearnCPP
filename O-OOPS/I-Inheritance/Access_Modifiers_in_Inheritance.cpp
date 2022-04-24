#include<iostream>
using namespace std;
class Base {
  public:
    int x=10;  // Declared Public
  protected:
    int y=20;  // Declared Protected
  private:
    int z=30;  // Declared Private
   public:
    
    // function to access private member
    int getPVT() {
      return z;
    }
};

class PublicDerived: public Base {
  // x is public
  // y is protected
  // z is not accessible from PublicDerived
  
    public:
    // function to access protected member from Base
    int getProt() {
      return y;    //Since, in public mode protected members can get inherited 
    }
};

class ProtectedDerived: protected Base {
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
  
  public:
    // function to access protected member from Base
    int getProt() {
      return y;  // y inherited as protected member
    }

    // function to access public member from Base
    int getPub() {
      return x;   // x inherited as protected member
    }
};

class PrivateDerived: private Base {
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
  
    public:
    // function to access protected member from Base
    int getProt() {
      return y;
    }

    // function to access private member
    int getPub() {
      return x;
    }

};
int main(){
   PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;   //Returning member by calling function of base class
  cout << "Protected = " << object1.getProt() << endl; //Returning member by calling function of derived class
  cout << "Public = " << object1.x << endl;    //Returning member by object
  
  
  
    ProtectedDerived object2;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object2.getProt() << endl;  //Returning member by calling function of derived class
  cout << "Public = " << object2.getPub() << endl;     //Returning member by calling function of derived class
  
  PrivateDerived object3;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object3.getProt() << endl;   //Returning member by calling function of derived class
  cout << "Public = " << object3.getPub() << endl;       //Returning member by calling function of derived class

  
  
    return 0;
}
