#include<bits/stdc++.h>
using namespace std;
class NumberClass
{
    int num;
public:
    NumberClass(int num = 0) { this->num = num; }
    void displayValues() { cout << num << "\n"; }

    /*Overloading the Extraction Operator
     * Note:
        * Declared friend since the calling object is a cin object, not a member of the class
        * Takes an input stream to insert values into
        * The parameter class object is not constant, since it is changed by the value entered
        * The input stream is returned to the console
     */

    friend istream& operator>>(istream& inStream, NumberClass& object)
    {
        inStream>>object.num;

        return inStream;
    }

    /*Overloading the Insertion Operator
     * Note: The object can be declared constant*/
    friend ostream& operator<<(ostream& inStream, const NumberClass& object)
    {
        inStream<<object.num;

        return inStream;
    }
};
int main()
{
    NumberClass x;

    cout<<"Enter a value for Object x: ";
    cin>>x;

    //Note that the displayValues function used before is now redundant
    cout<<"x = "<<x<<"\n";
}