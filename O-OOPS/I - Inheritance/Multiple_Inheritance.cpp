/*
Multiple Inheritances in C++
	Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one
	base class. 
	For example, we have three classes “employee”, “assistant” and “programmer”. If the “programmer” class is 
	inherited from the “employee” and “assistant” class which means that the “programmer” class can now implement 
	the functionalities of the “employee” and “assistant” class.
	
	*/
/* 
SYNTAX:
 class DerivedC: visibility-mode base1, visibility-mode base2
 {
      Class body of class "DerivedC"
 };
 
 */
 #include<iostream>
 using namespace std;
 class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
int main()
{
    Derived sanya;
    sanya.set_base1int(25);
    sanya.set_base2int(5);
    sanya.set_base3int(15);
    sanya.show();
    
    return 0;
}


