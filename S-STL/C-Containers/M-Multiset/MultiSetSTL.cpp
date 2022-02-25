

#include<set>
#include<iostream>
using namespace std;

typedef multiset<int>::iterator It;

int main(){
/* ------KEYPOINTS--------
 Multiset - that can store multiple elements that have same elements
stored in a specific -> sorted according to the internal comparison
values once inserted can't be modified
associative container -> elements are referred by their value and not by index
underlying data structure - BST

*/
int arr[]={10,20,11,9,32,10,11,20,20,30};
int n =sizeof(arr)/sizeof(int);

multiset<int> s(arr,arr+n);

    for(auto x:s)
    cout<<x<<" ";

    cout<<endl;

    //Erase 11
    s.erase(11); //Removes all the occurences of 11
    cout<<"Removed 11"<<endl;


    //Insert 55
    s.insert(55);
    cout<<"Insert 55"<<endl;

for(auto x:s)
    cout<<x<<" ";

    cout<<endl;

    //Count of a number
    cout<<"20 is repeated "<<s.count(20)<<" times"<<endl;

    //Find
    auto it =s.find(30);
    cout<<*it<<endl;

    //Get the range of all the element which are equal to 20
    pair<It,It> range=s.equal_range(20);

    for(auto i=range.first;i!=range.second;i++)
        cout<<*i<<" | ";

    cout<<endl;
    //print all element within a specific bound
    for(auto it=s.lower_bound(10);it!=s.upper_bound(55);it++)
            cout<<*it<<" - ";

return 0;
}

/*-------OUTPUT---------
9 10 10 11 11 20 20 20 30 32
Removed 11
Insert 55
9 10 10 20 20 20 30 32 55
20 is repeated 3 times
30
20 | 20 | 20 |
10 - 10 - 20 - 20 - 20 - 30 - 32 - 55 -
------------*/
