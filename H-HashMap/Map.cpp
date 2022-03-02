


#include<bits/stdc++.h> // A High utility header file generally used in Competitive Programming contains 100's header file

using namespace std;

// MAPS is a Data Structre which stores KEY-VALUE Pairs 
// Ordered Maps use Red Black Trees : an advanced data structre : https://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/
// maps are not contious Example it++ is allowed while it+1 is not  
// All keys are unique if redeclaration happens the pair with that pre-existing key updates

// READ MORE ABOUT MAPS : 

// 1. https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

// 2. https://www.cplusplus.com/reference/map/map/


void print(map<int,string> &m)
{
  cout<<m.size()<<endl;
for( auto &pr : m)
{
  cout<<pr.first<<" "<<pr.second<<endl;
}

// printing also O(logn) : TIME COMPLEXITY

}

int main()
{

map<int,string> m; // Declaration Syntax of Map STL 

m[1]="abc"; //O(logn) ALSO DEPENDS ON KEY ALSO ( Refer to RED BLACK TREES ) : TIME COMPLEXITY
m[5]="cdc";
m[3]="acd";

// Red Black Trees : It compares other strings length and place it acc to sorted method , READ more on above link
// string comparison time is added therefore
// Final TIME COMPLEXITY {s.size()*O(logn)} 

auto it1=m.find(3); // returns iterator of 3 if it of 3 doesnt exist then retunr m.end()
if(it1==m.end()){
  cout<<"NO VALUE"<<endl;
}
else{
  cout<<(*it1).first<<" "<<(*it1).second<<endl;
}


if(it1!=m.end()) // Checking if 'it' exist or not to avoid Segmentation Fault: https://www.geeksforgeeks.org/core-dump-segmentation-fault-c-cpp/
m.erase(it1); //O(logn) one must never give any iterator that doesnt exist else will give segmentation fault : TIME COMPLEXITY

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



// strings are also stored in lexographical order ie dictionary order




print(m);



}