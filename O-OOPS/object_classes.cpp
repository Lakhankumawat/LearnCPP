
//----------------Object Oriented Programming---------------------- //


/*  What is oop?

    OOP is a programming methodology which is  based on objects along 
    with functions and procedures. These objects are organized into classes, which
    allow individual objects to be grouped together.
    OOP make it easier to organize and structure software programs. It is also easy to update 
    and change a specific part of program without altering the other objects.


    What are classes in oop?
    A class is a blue print of an object. It is like a prototype that defines all the 
    property of an object.It defines state and behaviour of object. For example:- Car is a class with 
    XUV500, Alto, Scorpio, etc represent objects in car class.



    What is object in oop?
    It is an instance of a class. Each object has similar structure and properties as other objects in 
    a class. An object can also call functions, or methods, specific to that object.


    Class Hero
    
    |--------------|                                                   |---------------|
    |    power     |   instance (object) is created i.e Batman         | power=100     |
    |   weight     |=================================================> | weight = 80   |
    |   health     |                                                   | health=70     |
    |   speed      |                                                   | speed=90      |
    |   Level      |                                                   | Level=A       |                                       
    |--------------|                                                   |---------------|


    Here the object has same properties as of class.


*/



#include<iostream>
using namespace std;


//Creating class--------------------------

class Hero{

    //Declaring properties of a class
    int health;
    char level;

};  //Remember to put semi-colon at the end of a class----------------------


int  main(){

    //Creating object i.e. instance of a class
    Hero h1;
    cout<<"Size of h1 object is :- "<< sizeof(h1)<<endl;


    /*Output must be 8 because here in this class we have 2 integer variables (4+4 bytes)
     therefore the object will also contains the same 2 integers, hence its size will be 8. */

    return 0;
}