//Pairs in C++ STL
//Pair is used to combine together two values may be same or different datatypes

#include<bits/stdc++.h>
using namespace std;

int main(){
    //Defining a pair
    pair<int,string>p1;

    //1st way to insert valueds into pair
    p1=make_pair(1,"Amit");
     //2nd way to insert valueds into pair
    p1={2,"santanu"};

     //Displaying Pair elements.
     cout<<"Displaying elements of p1->"<<endl;
    cout<<p1.first<<"-> "<<p1.second<<endl;
    //Output: 2-> santanu

    // Copying from one pair to another
    pair<int,int>p2={10,20};//define another pair
    pair<int,int>p3=p2; //here from p2 data is copied to new pair p3

    /*For two given pairs say p2 and p3 , as their datatypes are same
    so p2's 1st value will be p3's 1st and p2's 2nd value will be p3's 2nd*/

    //Display content of new copied pair
     cout<<"Displaying elements of p3->"<<endl;
    cout<<p3.first<<"->"<<p3.second<<endl;


    //Pair of array

    pair<char,int>p_arr[3];
    //hair a pair of array taken of size 3

    //taking values of p_arr[3]
    p_arr[0]={'A',1};
    p_arr[1]={'B',2};
    p_arr[2]={'C',3};

    //Printing all elements of pair of array
    cout<<"Printing all elements of pair of p_arr"<<endl;
    for(int i=0;i<3;i++){
        cout<<"No "<<i+1<<". element are--> "<<p_arr[i].first<<"->"<<p_arr[i].second<<endl;
}
    //Swapping between two pairs
    pair<char, int> pair1 = make_pair('X', 100);
    pair<char, int> pair2 = make_pair('Y', 200);

    cout << "Before swapping the pairs "<<endl;
    cout << "elements of pair1 = " << pair1.first << "->"
         << pair1.second<<endl;
    cout << "elements of pair2 = " << pair2.first << "->"
         << pair2.second<<endl;
//swap between pair1 and pair2
    pair1.swap(pair2);

 //After swapping
    cout << "After swapping betwen pairs "<<endl;
    cout << "elements of pair1 = " << pair1.first << "->"
         << pair1.second<<endl;
    cout << "elements of pair2 = " << pair2.first << "->"
         << pair2.second<<endl;


//OUTPUT::
/*
Displaying elements of p1->
2-> santanu
Displaying elements of p3->
10->20
Printing all elements of pair of p_arr
No 1. element are--> A->1
No 2. element are--> B->2
No 3. element are--> C->3
Before swapping the pairs
elements of pair1 = X->100
elements of pair2 = Y->200
After swapping betwen pairs
elements of pair1 = Y->200
elements of pair2 = X->100
*/




} 