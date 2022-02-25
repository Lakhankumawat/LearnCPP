
#include<list>
#include<iostream>
using namespace std;

void print(list<string> l2){

    //Iterate over the list and print
for(string s:l2)
    cout<<s<<",";

    cout<<endl;

}


int main(){

//List is a Doubly Linked List it is advantageous in comparison to vector when it comes to insertion and deletion
//O(1) insert and delete last/first and insert middle is also slower than vector


list<int> l;

list<int> l1{1,2,6,9,12};

list<string> l2{"Apple","Banana","Mango"};

cout<<"Pineapple Pushed "<<endl;
l2.push_back("Pineapple");

print(l2);


/*//WE can sort the list */
l2.sort();
cout<<"Sorted : ";print(l2);


//We can reverse
l2.reverse();
cout<<"REverse : ";print(l2);


 cout<<"Front Element "<<l2.front()<<endl;
 l2.pop_front();
 cout<<"Removed Pineapple "<<endl;

/*//Add Front */
  cout<<"Added Straw "<<endl;
 l2.push_front("Strawberry");
 print(l2);


 /* // Pop back */
 cout<<"Pop Last : "<<l2.back()<<endl;
l2.pop_back();


 l2.push_back("Apple");
   string f;
   cout<<"Enter element to remove : ";
   cin>>f;

   //Remove the element name list all occurence
    l2.remove(f);

    print(l2);


/* ----Erase middle elements one or more -----*/

//We cant just simply add numbers to l2.begin here because in vector it was linear array
//but here its list not linear memory allocation
cout<<"Removing element at index 2"<<endl;
auto it =l2.begin();

it++;
it++;

l2.erase(it);

print(l2);


/* ----Insert middle elements one or more -----*/
cout<<"Adding element at index 1"<<endl;
auto itr =l2.begin();

itr++;
l2.insert(itr,"Watermelon");

print(l2);

return 0;
}


