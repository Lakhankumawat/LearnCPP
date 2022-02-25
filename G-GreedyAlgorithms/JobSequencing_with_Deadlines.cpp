//GDB CODE LINK Compile and Execute : https://onlinegdb.com/rknD8SBeO

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

int result[n],totalprofit=0;
bool slot[n];

for(int j=0;j<n;j++)
    slot[j]=false;

for(int i=0;i<n;i++){

   for(int j=min(n,a[i].deadL)-1;j>=0;j--){
    if(slot[j]==false){
        totalprofit+=a[i].profit;
         result[j] = i;  // Add this job to result
             slot[j] = true; // Make this slot occupied
             break;
    }
   }
}
cout<<"Jobs Sequencing Order : ";
for(int o=0;o<n;o++)
    if(slot[o]){
    cout<< a[result[o]].JobNo+1<<" ";
    }
    cout<<"Total Profit : "<<totalprofit;
}

int main(){
 int no,finaldead;

    cout<<"Enter Total Jobs: ";
cin>>no;
cout<<"Enter Your Final Deadline: ";
   cin>>finaldead;
Job Arr[no];
cout<<" Profit  Deadline"<<"\n";
for(int i=0;i<no;i++){


  cin>>Arr[i].profit>>Arr[i].deadL;
     Arr[i].JobNo = i;
}

JobSchedulingUsingDeadline(Arr,no,finaldead);
}


