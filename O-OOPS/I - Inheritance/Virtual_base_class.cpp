/*
Virtual Base Class in C++
	The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.
 	For example: suppose we created a class “Student” and two classes “Test” and “Sports”, are being derived from
	class “Student”. But once we create a class “Result” which is being derived from class “Test” and “Sports”.
	
	EXPLANATION:
	
		The main thing to note here is that the data members and member functions of class “Student” will be
		inherited twice in class “Result” because class “Test” and “Sports” are the parent classes of class 
		“Result” and they both are being derived from class “Student”.

		So when the class “Result” will try to access the data member or member function of class “Student” it 
		will cause ambiguity for the compiler and the compiler will throw an error. To solve this ambiguity we
		will make class “Student” as a virtual base class. To make a virtual base class “virtual” keyword is
		used.

		When one class is made virtual then only one copy of its data member and member function is passed to 
		the classes inheriting it. So in our example when we will make class “Student” a virtual class then 
		only one copy of data member and member function will be passed to the classes “Test” and “Sports”
		which will be shared between all classes. This will help to solve the ambiguity.
		
*/
#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test :virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};
int main(){

    Result Sanya ;
    Sanya.set_number(4200);
    Sanya.set_marks(78.9, 99.5);
    Sanya.set_score(9);
    Sanya.display();
    return 0;
}

