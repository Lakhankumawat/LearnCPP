
#include<iostream>
#include<vector>

using namespace std;
int main(){


//Assign 5 vectors value 10
vector<int> a(5,10);
vector<int> b(a.begin(),a.end());
vector<int> d{1,2,3,4,5};

//using simple for loop
for(int i=0;i<b.size();i++)
    cout<<b[i]<<" ";
cout<<endl;

//using iterator vector<int>::iterator;
for(auto it=b.begin();it!=b.end();it++)
    cout<<*it+10<<" ";
cout<<endl;

//Best of all loop
for(int c:b)
    cout<<c+20<<" ";
cout<<endl;

//Adding elements to the vector
vector<int> v;
int s,no; //s size
cin>>s;

for(int i=0;i<s;i++)
{
    cin>>no;
    v.push_back(no);
}

for(int c:v)
    cout<<c<<",";


cout<<endl;
//If we double the size of vector there may be some problems

//Understand at the memory level what are the differences between the vector d and v

cout<<v.size();
cout<<endl;
cout<<v.capacity()<<endl; //size of underlying array
cout<<v.max_size()<<endl; //maximum no of elements a vector can hold in the worst case acc. to avlb memory


cout<<d.size();
cout<<endl;
cout<<d.capacity()<<endl; //size of underlying array
cout<<d.max_size()<<endl;
return 0;
}

/*

Output of following code :


10 10 10 10 10
20 20 20 20 20
30 30 30 30 30
5
11 12 13 14 15
11,12,13,14,15,
5
8
4611686018427387903
5
5
4611686018427387903

Process returned 0 (0x0)   execution time : 9.514 s
Press any key to continue.
*/
