/*
 *auther:Heba Azouz
 *Programe Name:Area of Rectangle
 *Last Modification Date: 29 Mar 2022
 *Version: 1.0
*/

#include <iostream>
using namespace std;

int main()
{
    float length, width, area;
    cout << "Enter Width of Rectangle." << endl;
    cin >> width;
    cout << "Enter length of Rectangle." << endl;
    cin >> length;
    if(width>0 && length>0)
    {
        area = width * length;
        cout << "Area of Rectangle = " << area << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
}
