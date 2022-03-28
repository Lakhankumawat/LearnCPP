#include<iostream>
using namespace std;
int main() {
 int x;
 cout<< "input the weight : ";
 cin>> x;
while (true){
    if (x<0 || x==0 ){
        cout<< "input the weight again : ";
        cin>> x;
        if (x<0 || x==0 ){
            continue;
        }
        else{
            break;
        }
        
        }

 }
 if (x%2==0)
 {
 cout<<"yes the weight is even ";
 }
 else{
     cout<<"no the weight is odd";
 }
}