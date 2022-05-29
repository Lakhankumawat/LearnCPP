#include <iostream>  
using namespace std;  
class base // Base class created  
 {
    
	public:  
	int x, y; // data members of base class created 
	void getdata() // function to get data for base class data members
    {  
cout<< "Enter value of x :"<<endl;  
cin>> x ; 
cout<<"Enter the value of y :" <<endl;
cin>>y;
    }  
};  
class derived1 : public base //derived1 class is derived from class base  
{  public:
int a,b;
 
void getdata_derived() // function to get data for derived1 class data members
    {  
cout<< "Enter value of a :"<<endl;  
cin>> a ; 
cout<<"Enter the value of b :" <<endl;
cin>>b;
    }  
void product()  
    {  
cout<< "\nProduct= " << x * y <<endl; // Performs product of data members of base class  
    }  
};  
class derived2 : public base //derived2 class is also derived from class base  
{  public:
int c,d;

void getdata_derived() // function to get data for derived2 class data members
    {  
cout<< "Enter value of c :"<<endl;  
cin>> c ; 
cout<<"Enter the value of d :" <<endl;
cin>>d;
    } 
void sum()  
    {  
cout<< "\nSum= " << x + y<<endl;; // Performs sum of data members of class base  
    }  
};  
class derived3 : public derived1 //derived3 class is  derived from class derived1 
{  
public:  
void sum_derived()  
    {  
cout<< "\nSum= " << a+b<<endl; // Performs sum of data members of class derived1
    }  
}; 
class derived4 : public derived2 //derived4 class is  derived from class derived2
{  
public:  
void product_derived ()  
    {  
cout<< "\nProduct= " << c*d<<endl; // Performs sum of data members of class derived1
    }  
}; 
int main()  
{  
    derived1 obj1; //object of derived1 class  
    derived2 obj2; //object of derived2 class 
     derived3 obj3; //object of derived3 class 
      derived4 obj4; //object of derived4 class 
    
obj1.getdata(); // input x and y   
obj1.product();  //product of x and y
obj2.getdata();  //input x and y
obj2.sum(); //sum of x and y
obj3.getdata_derived(); //input a and b
obj3.sum_derived(); //sum of a and b
obj4.getdata_derived(); // input c and d
obj4.product_derived(); //product of c and d
return 0;  
} 
