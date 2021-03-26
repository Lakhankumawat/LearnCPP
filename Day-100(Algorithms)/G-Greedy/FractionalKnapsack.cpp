
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//1.Take profit/weight ratio and sort in decreasing order.
//2.Take the sum weight till sum is not exceed capacity.
//3.Output the maximum profit or all the included weights.

struct Object{
float weight;
float profit;
float PWratio;
};
bool cmp(struct Object a, struct Object b)
{
    return a.PWratio > b.PWratio;
}

void KnapSackFractional(Object a[],int n,int capacity){
sort(a,a + n,cmp);
float p=0;
for(int i=0;i<n;i++){
    if(a[i].weight<=capacity){
        p+=a[i].profit;
        capacity-=a[i].weight;
    }
    else if(capacity!=0){
        a[i].PWratio= capacity/a[i].weight;
        p+=a[i].PWratio*a[i].profit;
         capacity-=a[i].PWratio*a[i].weight;
    }

}

cout<<"Profit :"<<p;
}



int main(){
    int no,capacity;
    cout<<"Enter Capacity: ";
   cin>>capacity;
    cout<<"Enter Total Objects: ";
cin>>no;
Object Arr[no];
for(int i=0;i<no;i++){

   cout<<" Profit "<<i+1<<" : "; cin>>Arr[i].profit;
     cout<<" Weight "<<i+1<<" : "; cin>>Arr[i].weight;
   Arr[i].PWratio = Arr[i].profit/Arr[i].weight;
  //cout<<" Ratio "<<i<<" : "; cout<<Arr[i].PWratio<<endl;//Ratio
}

KnapSackFractional(Arr,no,capacity);

return 0;
}