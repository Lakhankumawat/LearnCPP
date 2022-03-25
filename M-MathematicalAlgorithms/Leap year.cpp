/******************************************************************************
this program in C++ to check whether a year is a leap year or not. 
the year must be( year%4==0 and year%100!=0 ) or (year%400==0)
to be a leap year
The answer to this question is given below:
*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the Year: ";
    //take the year from the user
    cin>>year;
	//if the year%4==0 and year%100!=0
    if((year%4==0) && (year%100!=0))
        cout<<"\nIt is a Leap Year";
    //if the year%400==0
    else if(year%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
    cout<<endl;
    return 0;
}
