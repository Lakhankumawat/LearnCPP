#include<iostream>
using namespace std;
int main() {
    int x [5]={1,2,3,4,5};
    for(int i =0; i< 5; i++)
    {
        if(x[i]==5)
        {
            continue;
        }
        else
        {
            cout<<x[i]<<endl;
        }
    }
	return 0;
}