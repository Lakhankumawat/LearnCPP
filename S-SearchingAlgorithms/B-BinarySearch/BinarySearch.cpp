#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[]={10,20,40,40,40,70,100,130,560};
int n=sizeof(arr)/sizeof(int);

cout<<n<<endl<<"Enter element to Search : ";

//Search element find operation
int key;
cin>>key;

bool present = binary_search(arr,arr+n,key);
if(present)
    cout<<"Present"<<endl;
else
    cout<<"Not present"<<endl;


//Two more things to get the index of the element
//lower_bound(s,e,key) and upper_bound(s,e,key)


//Lower bound gives you the element >=key i.e >=40 index 2
auto l =lower_bound(arr,arr+n,40);
cout<<"Lower Bound of 40 is : "<<l-arr<<endl;


//Upper bound gives the elemetn strictly greater than key >40 index 5
auto it =upper_bound(arr,arr+n,40);
cout<<"Upper Bound of 40 is : "<<it-arr<<endl;


//We can use this bounds to find out the freq of an element in the array
cout<<"Freq. of 40 is "<<it-l<<endl;

return 0;
}
