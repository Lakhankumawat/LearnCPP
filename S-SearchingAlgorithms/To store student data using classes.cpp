#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int marks;

public:
    void getDetails();
    void setDetails();
};

void Student::setDetails()
{
    cout << "Enter the name : " << endl;
    cin >> name;
    cout << "Enter total marks : " << endl;
    cin >> marks;
}

void Student::getDetails()
{
    cout << "Name : " << name << " ,marks : " << marks << endl;
}

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the count of students : ";
    cin >> count;

    if (count > 0)
    {
        Student studentArray[count];
        for (int i = 0; i < count; i++)
        {
            cout << "For student " << i + 1 << " :" << endl;
            studentArray[i].setDetails();
        }

        cout << "\nYou have entered : " << endl;
        for (int i = 0; i < count; i++)
        {
            studentArray[i].getDetails();
        }
    }
    else
    {
        cout << "Please enter a valid number." << endl;
    }
    return 0;
}
