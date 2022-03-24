> # Pairs in C++ STL
---
> **Pair** in C++ is used to combine 2 values in it , and their datatypes may be same or not. Pairs are generally used in problems which need touples to carry into any datastructure.
<br>
The 1st value is pointed by first and next value is pointed by second.
---
# Syntax:

## 1. Initialize a Pair:
```cpp
pair<datatype1,datatype1>pair_name;
//example: pair<int,string>p1;
/* first value is type 'int'
and 2nd of type string*/ 
```

## 2. Insert values into pair
```cpp
//1st way to insert valueds into pair
    p1=make_pair(1,"Amit");
//2nd way to insert valueds into pair
    p1={2,"santanu"};
```

## 3. Display content of Pair:
```cpp
cout<<"Displaying elements of p1->"<<endl;
cout<<p1.first<<"-> "<<p1.second<<endl;
//Output: 2-> santanu
/*p1.first point to 1st value of pair p1 and p1.second points to 2nd value of pair p1.
```
## 4. Copying content from one pair to another:
```cpp
  pair<int,int>p2= [10,20] ;
//define another pair
    
    pair<int,int>p3=p2; 
//here from p2 data is copied to new pair p3
//Display content of new copied pair
     cout<<"Displaying elements of p3->"<<endl;
    cout<<p3.first<<"->"<<p3.second<<endl;
/*OUTPUT:
Displaying elements of p3-> 10->20 */ 
```

## 5. Pair of Array.
```cpp
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
/* OUTPUT:
Printing all elements of pair of p_arr
No 1. element are--> A->1
No 2. element are--> B->2
No 3. element are--> C->3
*/
```

## 6. Swapping between pairs.
```cpp
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
/* OUTPUT:
Before swapping the pairs
elements of pair1 = X->100
elements of pair2 = Y->200
After swapping betwen pairs
elements of pair1 = Y->200
elements of pair2 = X->100
*/
```

## 7. Iterators in Pair

```cpp
 vector<pair<int,int>>VP=[[1,2],[3,4],[5,6]];
 //initialize a vector containing pair in it.
 //iterator to access elements of the vector of pairs
 vector<pair<int,int>>::iterator it;
 //iterating over all elements
 for(it=vp.begin(); it!=vp.end();it++){
     cout<<(*it).first<<" "<<(*it).second<<endl;
 }
 /*OUTPUT
1->2
3->4
5->6
```
