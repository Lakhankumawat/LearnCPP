
// Please read the README.md before going through the code for better understanding for maps 


#include<iostream>
#include<string>
#include<map> // The header file specifically made for STL-Maps

#include<bits/stdc++.h> // A High utility header file generally used in Competitive Programming contains 100's header file

using namespace std;

void print(map<int,string> &m)
{
  cout<<m.size()<<endl;
for( auto &pr : m)
{
  cout<<pr.first<<" "<<pr.second<<endl;  // printing takes O(logn) , since we run the loop 'n' times so final complexity becomes O(nlogn)-> TIME COMPLEXITY
}

}

int main()
{

map<int,string> m; // Declaration syntax of STL-Map 

m[1]="abc"; 
m[5]="cdc";
m[3]="acd";

//Insertion takes O(logn) : It depends on the key also ( Refer to RED BLACK TREES ) -> TIME COMPLEXITY

auto it1=m.find(3); // returns iterator of the value '3' and stores it in it1 

if(it1==m.end()){  // if '3' is not present then it1 will be assigned with m.end() which has NO VALUE 
  cout<<"NO VALUE"<<endl; 
}
else{
  cout<<(*it1).first<<" "<<(*it1).second<<endl;
}


if(it1!=m.end()) 
m.erase(it1); //O(logn)  -> TIME COMPLEXITY

print(m); 

m.clear(); // clears the whole map 


// Another way of insert 

m.insert({4,"afg"});

// priniting using iterator method

map<int,string> :: iterator it;

for(it=m.begin();it!=m.end();it++)
{

  cout<<(*it).first<<" "<<(*it).second<<endl; // prints in sorted order

}

print(m);

}