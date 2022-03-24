#include<iostream>
using namespace std;
int main(){
    int kilo;
    cout<<"The weight of the watermelon bought by the boys:";
    cin>>kilo;
    if (kilo % 2 == 0)
    {
        cout<<"Yes,The boys can divide the watermelon into two parts, each of them weighing even number of kilos";
    }
    else{
        cout<<"No,The boys can't divide the watermelon into two parts, each of them weighing odd number of kilos";
    }
    
}