
#include<unordered_map>
#include<iostream>
using namespace std;

//Custom key for a map of a Student class
class Student{
public:
    string firstname;
    string lastname;
    string rollno;

    //Constructor to make Students
    Student(string f,string l,string no){
    firstname=f;
    lastname=l;
    rollno=no;
    }

//Operator overloading in C++ defining our own custom == operator function
//Since already a definition of == was present in c++ we defined one more so its called operator overloading

bool operator ==(const Student &s) const{
   return rollno==s.rollno?true:false;
}


};

//Define our hashfn
class Hashfn{

public:
   // size_t is unsigned int type of data type
   /*----This Hashfn Sorts on the basis of the length() fname+ lname greater will be at top--*/
    size_t operator()(const Student &s) const{

    return s.firstname.length()+s.lastname.length();

    }
};

int main(){

    /* to map the key student by marks(int) using HashFn */
    unordered_map<Student,int,Hashfn> student_map;

    Student s1("lakhan","kumawat","055");
    Student s2("Fauna","Mittal","010");
    Student s3("Lakhan","paarek","211");
    Student s4("Fauna","Mittal","032");
    Student s5("Abcdefgh","hacker","-0-");

    //Add Student marks to hashmap
    student_map[s1]=100;
    student_map[s2]=40;
    student_map[s3]=30;
    student_map[s4]=10;
    student_map[s5]=10000;
    //Iterate over all students

    for(auto s:student_map){
        cout<<s.first.firstname<<" "<<s.first.rollno<<" : "<<s.second<<endl;
    }

return 0;
}

