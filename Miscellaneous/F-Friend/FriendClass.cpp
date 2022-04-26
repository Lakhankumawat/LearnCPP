// Class member functions can be declared as friends in other classes.
#include<iostream>
using namespace std;
class B;
class C;
class A
{
public:
    int Func1(B &b);
    int Func2(B &b); 
    int Func2(C &c); //overloading Func2 
    void display(C &c);
};

class B
{
private:
    int membervariableofB;

    // A::Func1 is a friend function to class B
    // so A::Func1 has access to all members of B
    friend int A::Func1(B &);

public:
    B(int bb) : membervariableofB(bb) {} // parameterized constructor
};
class C
{
private:
    int membervariableofC;
    void show(){cout<<"I am a private member function of class C"<<endl;}
    friend class A; //entire class A is friend to C 
    //so we can access private members of C using Class A
public:
    C(int cc) : membervariableofC(cc) {} // parameterized constructor
    
};

int A::Func1(B &b) { return b.membervariableofB; } // OK
// int A::Func2( B& b ) { return b.membervariableofB; }   // ERROR as only Func1() is friend to class B

int A::Func2(C &c) { return c.membervariableofC; } 
void A::display(C &c) { cout<<"\ncalling show() of Class C :"<<endl; c.show(); }
int main()
{
    int n;
    cout<<"\nEnter any integer value to be assigned to Class B member variable: ";
    cin>>n;
    B objB(n);
    A objA;
    cout<<"\nCalling Class A memeber function Func1() which is friend to Class B: "<<objA.Func1(objB)<<endl;
    cout<<"\nNote: Entire Class A is friend to C"<<endl;
    cout<<"\nEnter any integer value to be assigned to Class C member variable: ";
    cin>>n;
    C objC(n);
    cout<<"\nCalling memeber function Func2() of Class A: "<<objA.Func2(objC)<<endl;
    cout<<"\nCalling member function display() of Class A: ";
    objA.display(objC);
    return 0;
}