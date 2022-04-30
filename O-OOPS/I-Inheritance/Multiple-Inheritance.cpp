 #include<iostream>
 using namespace std;
 class Base1{ //first base class created
protected:
    int base1int; //member of first base class created

public:
    void set_base1int(int a) //function used to assign value to the member of first base class
    {
        base1int = a;
    }
};

class Base2{ //second base class created
protected:
    int base2int; //member of second base class created

public:
    void set_base2int(int a) //function used to assign value to the member of second base class
    {
        base2int = a;
    }
};

class Base3{ //third base class created
protected:
    int base3int; //member of third base class created

public:
    void set_base3int(int a)  //function used to assign value to the member of third base class
    {
        base3int = a;
    }
};
class Derived : public Base1, public Base2, public Base3 //Derived class created has been derived from multiple base classes i.e. base class1 ,base class 2 and base class 3.
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;  //Derived class has access to members of base class 1
            cout << "The value of Base2 is " << base2int<<endl;  //Derived class has access to members of base class 2
            cout << "The value of Base3 is " << base3int<<endl;  //Derived class has access to members of base class 3
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
int main()
{
    Derived sanya; //Derived class has access to memebers of all of the three base classes.
    sanya.set_base1int(25);  
    sanya.set_base2int(5);
    sanya.set_base3int(15);
    sanya.show();
    
    return 0;
}

