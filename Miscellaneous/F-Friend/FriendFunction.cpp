//
#include <iostream>
using namespace std;
class P
{
    private:
    int memebervariable;
    friend void ChangePrivate(P &);  //not a member of class P and can be declared in either p

public:
    P(int n) : memebervariable(n) {}
    void PrintPrivate(void) { cout << memebervariable << endl; }


};

void ChangePrivate(P &i) { i.memebervariable++; } //it has access to 

int main()
{
    int n;
    cout<<"Enter any integer value to be assigned to private member variable of class P: ";
    cin>>n;
    P p(n);
    cout<<"Initially: ";
    p.PrintPrivate();
    cout<<"calling the friend function to increment the private member variable value"<<endl;
    ChangePrivate(p);
    cout<<"Afterwards: ";
    p.PrintPrivate();
   
}