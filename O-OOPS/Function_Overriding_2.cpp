#include <iostream>
using namespace std;

class base {
    public:
    virtual void display() {
        cout<<"Function of base class"<<endl;
    }
};
class derived : public base {
    public:
    void display() {
        cout<<"Function of derived class"<<endl;
    }
};

int main() {
  derived d1;
  d1.display();
  return 0;
}
