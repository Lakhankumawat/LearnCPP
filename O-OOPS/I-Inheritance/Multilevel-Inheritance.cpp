
#include <iostream>
using namespace std;

class Student  //first class is created
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)   //set roll number is used to assign the value of agument passed to function to the member roll number
{
    roll_number = r;
}

void Student ::get_roll_number()   // Get roll number is used to access the member roll number
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student //Second class is created which is a derived class. It has been derived from Student class publically.
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2) //used to assign the value of arguments passed to function set_marks to members maths and physics.
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks() //this function is used to get marks of maths and physics
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class Result : public Exam //Third derived class is created. It has beeen derived from base class Exam.
{
    float percentage;

public:
    void display_results() //Displays the overall result involving roll number, marks and percentage of a student.
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result sanya;
    sanya.set_roll_number(42);
    sanya.set_marks(94.0, 90.0);
    sanya.display_results();
    return 0;
}
