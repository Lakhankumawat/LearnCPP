
//Insertion Erase and Find is O(1) on average

//There is no sorting in unordered map


#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

/* -------------Maps maintain a self balancing BST------------- */



int main(){
unordered_map<string,int> m;

/* Insert Values in Map */
m.insert(make_pair("Mango",100));

//Make a pair and insert
pair<string,int> p;

p.first="Apple";
p.second=120;

m.insert(p);

//Insert way 3

m["Banana"]=20;


string fruit;
cin>>fruit;


//Lets try to update the value of keys
m[fruit]+=22;


//Iterator can also be defined as map<string,int>:: iterator;
//it here is iterator
auto it = m.find(fruit);

//If fruit is not present it will point to the end of map

if(it!=m.end()){
    cout<<"Price of "<<fruit<<" : "<<m[fruit];}
    else
        cout<<"Fruit is not present";

    cout<<endl;

    cout<<"Deleted Fruit "<<fruit;
    m.erase(fruit);

    cout<<endl;

    //Another way to find a particular map
    //it stores unique keys only once

    //mapname.count returns 1 if key is present , 0 if not present

    if(m.count(fruit))
        cout<<"Price : "<<m[fruit];
    else
        cout<<"Fruit is not present";

    cout<<endl;



    //Lets try to update the value of keys another one
    m["Strawberry"]=110;
    m["Mango"]=90;

    for(auto it=m.begin();it!=m.end();it++)
        cout<<it->first<<" and "<<it->second<<endl;  //We can also access values by *it


    //For each loop in Maps

    for(auto p:m)
        cout<<p.first<<" : "<<p.second<<endl;




return 0;
}

/*-------OUTPUT------
Mango
Price of Mango : 122
Deleted Fruit Mango
Fruit is not present
Mango and 90
Strawberry and 110
Banana and 20
Apple and 120
Mango : 90
Strawberry : 110
Banana : 20
Apple : 120
--------------*/


