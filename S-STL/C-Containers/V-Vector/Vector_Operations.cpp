#include<vector>
#include<iostream>
using namespace std;

// To print vector after each operation

void print(vector<int> v){
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;
}


int main(){

    vector<int> v{1,2,3,4,5};

    cout<<v.front()<<endl; //front element - 1
   
    cout<<v.back()<<endl;  //Back Element - 5 

    v.push_back(9);  //Push a element at the last O(1) most of the time

    print(v);  // 1 2 3 4 5 9 

    v.pop_back(); //Pop last element / removes the last element

    print(v); // 1 2 3 4 5

    
    v.insert(v.begin()+3,100);  // Insert some elements in the middle - occupies the position but doesnot replace the element 

    print(v); // 1 2 3 100 4 5

    v.insert(v.begin()+4,2,200); //insert many in the same way (start,multiplier,element)

    print(v); // 1 2 3 100 200 200 4 5

    v.erase(v.begin()+3,v.begin()+5);  // remove one or many

    print(v); // 1 2 3 200 4 5 

    cout<<v.size()<<endl;  //Size of vector -- 6

    cout<<v.capacity()<<endl;  // Capacity of vector -- 10

    v.resize(8);    //Resizing a vector may or may not change capacity -- 10

    cout<<v.capacity()<<endl;  // no change in capacity -- 10

    print(v); // 1 2 3 200 4 5 0 0

    v.clear();    // Remove all the elements of the vector , does not delete the memory occupied by vector

    cout<<v.size()<<endl; // 0

    cout<<v.capacity()<<endl; // 10

    if(v.empty())        //Empty method
        cout<<"V is empty"<<endl;   // V is empty

    print(v); // empty




    //Most important concept for vectors//

    vector<int> d;
    int s,no; //s size
    cout<<"Enter sizeof vector : ";
    cin>>s;


    // Always reserve the memory of a vector before actually making a new vector
    // Every time we add a new value to a vector it doubles itself and makes a  new copy of itself
    // So adding a new element is an expensive operation if vector is of small variable size
    // We can reserve values instead


    /* ------Operation 1 : Without Reserve ---------*/

    cout<<"Enter the "<<s<<" elements"<<endl;

    for(int i=0;i<s;i++)
    {
        cin>>no;
        d.push_back(no);
        cout<<"Change in capacity "<<d.capacity()<<endl;

    }
    cout<<d.capacity()<<endl;
    print(d);
    d.clear();
    cout<<"Now with reserve lets clear vector first"<<endl;


    /* ------Operation 1 : With Reserve ---------*/

    d.reserve(10);

    cout<<"Again enter the "<<s<<" elements"<<endl;

    for(int i=0;i<s;i++)
    {
        cin>>no;
        d.push_back(no);
        cout<<"Change in capacity "<<d.capacity()<<endl;

    }
    cout<<d.capacity()<<endl;
    print(d);

    return 0;
}


/* --- OUTPUT ---

    1
    5
    1 2 3 4 5 9 
    1 2 3 4 5 
    1 2 3 100 4 5 
    1 2 3 100 200 200 4 5 
    1 2 3 200 4 5 
    6
    10
    10
    1 2 3 200 4 5 0 0 
    0
    10
    V is empty

    Enter sizeof vector : 5
    Enter the 5 elements
    1
    Change in capacity 1
    5
    Change in capacity 2
    9
    Change in capacity 4
    6
    Change in capacity 4
    3
    Change in capacity 8
    8
    1 5 9 6 3
    Now with reserve lets clear vector first
    Again enter the 5 elements
    3
    Change in capacity 10
    6
    Change in capacity 10
    9
    Change in capacity 10
    5
    Change in capacity 10
    1
    Change in capacity 10
    10
    3 6 9 5 1

*/
