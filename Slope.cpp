// C++ program for slope between two points
#include<bits/stdc++.h>
using namespace std;
// function to find the slope of a two points
double slope(double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}
// driver code to check the above function
int main()
{
    double x1,y1,x2,y2;
    cout<<"please enter the first point\n";
    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;
    cout<<"please enter the second point\n";
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
    cout<<"The slope is : "<<slope(x1,y1,x2,y2);

}
