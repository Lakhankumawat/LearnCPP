
//PLease read the text file Vectors.md in this directory before precedding further

#include<iostream>
#include <list>
using namespace std;

void showlist(list<int> mylist){
list <int>::iterator itr;//Making a iterator of my list as i cannot access index just like arrays

for(itr=mylist.begin();itr!=mylist.end();itr++){
    cout<<" "<<*itr<<" "; //simple for loop to print the value of the element s in the list
}
cout<<endl;
}

int main(){

//Create a list
list <int> mylist;//convention basically to make a list of type int
//Now to push the data and perform the series of operations in the list
for(int i=1;i<=10;i++)
mylist.push_back(i*2); //vector::push_back() is a library function of "vector" header, it is used to insert/add an element at the end of the vector

cout<<"List is : ";showlist(mylist);//to show the list function is defined above

cout<<"Front : "<<mylist.front()<<"\t";//first
cout<<"Back : "<<mylist.back()<<endl;//last

cout<<"Pop front : "; mylist.pop_front(); showlist(mylist);
cout<<"Reverse : ";mylist.reverse();showlist(mylist);
cout<<"Sort : ";mylist.sort();showlist(mylist);

//There are other operations too but i have covered which are important and required

    return 0;
}

