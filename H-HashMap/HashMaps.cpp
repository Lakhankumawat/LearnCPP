
//PLease read the text file Hashmaps.txt in this directory before precedding further

#include<iostream>
#include<map>
using namespace std;
int main(){
//basic vector int key and int mapping
map<int,int> l;
//insert values in hashmap
l.insert(pair<int,int>(1,10));
l.insert(pair<int,int>(2,20));
l.insert(pair<int,int>(3,30));
l.insert(pair<int,int>(4,40));
l.insert(pair<int,int>(5,50));
//make a map iterator
    map<int, int>::iterator itr;
cout<<"1.Using itr basic begin to end : \n";
//to print the map in various fashion
for(itr=l.begin();itr!=l.end();itr++)
    cout<<itr->first<<"\t"<<itr->second<<"\n";

    cout<<"\n2.Another one : \n";
    //Assigninng to another map
    map<int,int> l2(l.begin(),l.end());

    for(itr=l2.begin();itr!=l2.end();itr++)
    cout<<itr->first<<"\t"<<itr->second<<"\n";

     cout<<"\n3.Remove : \n";
    //removing values from map from begin to key value 2
    l.erase(l.begin(),l.find(3));

    for(itr=l.begin();itr!=l.end();itr++)
    cout<<itr->first<<"\t"<<itr->second<<"\n";

    cout<<"\n4.Remove one: \n";
    //removing values from map with key value 5
    l.erase(5);

   for(itr=l.begin();itr!=l.end();itr++)
    cout<<itr->first<<"\t"<<itr->second<<"\n";


 return 0;
}
