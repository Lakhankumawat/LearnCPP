#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[]={10,20,40,70,100};
int n=sizeof(arr)/sizeof(int);

cout<<n<<endl<<"Enter element to Search : ";

//Search element find operation.
int key;
cin>>key;
//It will return address of searched element so auto instead of int
auto it = find(arr,arr+n,key);  //Find function is present in algorithm headerfile

//Final add to it - address[0] i.e arr
int index=it-arr;

//if element is not in index it will return end element of array index +1
if (index==5)
    cout<<"Element not present";
else
    cout<<"Element is at index"<<index;
return 0;
}
