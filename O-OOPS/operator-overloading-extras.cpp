#include<bits/stdc++.h>
using namespace std;
class NumberClass
{
    int num;
public:
    NumberClass(int num = 0) { this->num = num; }
    void displayValues() { cout << num << "\n"; }

    //Overloading Typecast to int requires no return type
    operator int()
    {
        //since num is already an int, we can also return num directly
        return int(num);
    }
};
class ArrayLike
{
    int* arr,size;
public:
    ArrayLike(int size = 1)
    {
        this->size = size;
        arr = new int[size];
    }

    /*Overloading Subscript Operator [ ]:
     * returns a reference to the type of elements in the array
     * takes the index as a parameter*/

    int& operator[](int index)
    {
        return arr[index];
    }
};
int main()
{
    NumberClass object = 3;
    cout<<"Object directly assigned integer value: ";object.displayValues();

    int x = object;

    if(object==3) cout<<"\nobject compared to int without overloading operators\n\n";

    ArrayLike arrObj(3);
    //Note: instead of accessing the private array member through its name, we can access it through the
    //name of the object itself
    arrObj[0] = 2;
    arrObj[1] = 7;
    cout<<"Calling an array element directy from the object: "<<arrObj[1]<<"\n";
}