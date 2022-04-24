// CPP Program to illustrate late binding
#include<iostream>
using namespace std;
	
class Base
{
public:
	virtual void show() { cout<<" In Base \n"; }
};
	
class Derived: public Base
{
public:
	void show() { cout<<"In Derived \n"; }
};
	
int main(void)
{
	Base *bp = new Derived;
    cout<<"Called the derived class show function using the base class pointer"<<endl;
	bp->show(); // RUN-TIME POLYMORPHISM
	return 0;
}
