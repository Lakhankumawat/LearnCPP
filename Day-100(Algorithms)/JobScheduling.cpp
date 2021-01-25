
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//1.Sort the profit in decreasing order
//2.set the job just before of before deadline Time.

struct Job{
    int JobNo;
int deadL;
int profit;
};

bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}

void JobSchedulingUsingDeadline(Job a[],int n, int finaldead){
sort(a,a+n,comparison);

int result[n];
bool slot[n];

for(int j=0;j<n;j++)
    slot[j]=false;

for(int i=0;i<n;i++){

   for(int j=min(n,finaldead)-1;j>=0;j--){
    if(slot[j]==false){
        slot[j]=true;
        result[j]=i;
        break;
    }
   }
}

for(int o=0;o<n;o++)
    if(slot[o])
    cout<< a[result[o]].JobNo+1<<endl;

}

int main(){
 int no,finaldead;
    cout<<"Enter Your Deadline: ";
   cin>>finaldead;
    cout<<"Enter Total Jobs: ";
cin>>no;
Job Arr[no];
for(int i=0;i<no;i++){

   cout<<" Profit "<<i+1<<" : "; cin>>Arr[i].profit;
     cout<<" Deadline "<<i+1<<" : "; cin>>Arr[i].deadL;
     Arr[i].JobNo = i;
}

JobSchedulingUsingDeadline(Arr,no,finaldead);
}
