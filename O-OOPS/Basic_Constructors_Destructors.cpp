//Understanding Constructors in C++ with a single program
#include <iostream>
using namespace std;

class student
{
    int roll;
    public:
    student()
    {
        roll=0;
        cout<<"Default constructor called"<<endl;
    }
    student(int j)
    {
        cout<<"Parameterized constructor called"<<endl;
        roll=j;
    }
    student(student &k)
    {
        cout<<"Copy constructor called"<<endl;
        roll=k.roll;
    }
    void show()
    {
        cout<<"roll is "<<roll<<endl;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
};

int main()
{
    student s2(20); //Parameterized constructor is called
    student s1;    //Default constructor is called
    student s3(s2); // copy constructor is called
    
    s1.show(); //show method to display the value of roll in default constructor with the help of object s1
    s2.show();//show method to display the value of roll in Parameterized constructor with the help of object s2
    s3.show();//show method to display the value of roll in copy constructor with the help of object s3
    return 0;
}


