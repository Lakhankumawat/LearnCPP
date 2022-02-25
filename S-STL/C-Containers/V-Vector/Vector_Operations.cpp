
#include<vector>
#include<iostream>
using namespace std;

//To print vector after each operation
void print(vector<int> v){
for(int x:v)
    cout<<x<<" ";

    cout<<endl;

}

int main(){

vector<int> v{1,2,3,4,5};

//front element
cout<<v.front()<<endl;
//Back Element
cout<<v.back()<<endl;

//Push a element at the last O(1) most of the time
v.push_back(9);

print(v);

//Pop last element / removes the last element

v.pop_back();
print(v);

//Insert some elements in the middle

v.insert(v.begin()+3,100);

cout<<"9 removed 100 inserted"<<endl;

print(v);

//insert many
v.insert(v.begin()+4,2,200);

print(v);
//remove one/many

v.erase(v.begin()+3,v.begin()+5);

print(v);

 //Size and capacity of vector
 cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;


 //Resizing a vector may or may not change capacity
 v.resize(8);
 cout<<v.capacity()<<endl;

print(v);

 //Remove all the elements of the vector  , does not delete the memory occupied by vector

 v.clear();

  cout<<v.size()<<endl;


  //Empty method
  if(v.empty())
    cout<<"V is empty"<<endl;

print(v);

//Most important concept for vectors//

vector<int> d;
int s,no; //s size
cout<<"Enter sizeof vector : ";
cin>>s;


//Always reserve the memory of a vector before actually making a new vector

//Every time we add a new value to a vector it doubles itself and makes a  new copy of itself
//So adding a new element is an expensive operation if vector is of small variable size

//WE can reserve values instead

/* ------Operation 1 : Without Reserve ---------*/

for(int i=0;i<s;i++)
{
    cin>>no;
    d.push_back(no);
    cout<<"Changing capacity "<<d.capacity()<<endl;

}

cout<<d.capacity()<<endl;
print(d);
d.clear();
cout<<"Now with reserve lets clear vector first"<<endl;

/* ------Operation 1 : With Reserve ---------*/
d.reserve(10);

for(int i=0;i<s;i++)
{
    cin>>no;
    d.push_back(no);
    cout<<"Changing capacity "<<d.capacity()<<endl;

}

cout<<d.capacity()<<endl;


print(d);

return 0;
}


