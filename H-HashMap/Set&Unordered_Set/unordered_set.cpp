#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>un;
    cout<<"enter unordered_set size->";
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int val;
        cout<<"enter Value->";
        cin>>val;
        un.insert(val);
    }
    cout<<endl;

    cout<<"Size of unordered_Set ->"<<un.size()<<endl;

    cout<<"display unordered_Set elements->"<<endl;
     for(auto it=un.begin(); it!=un.end(); it++){
        cout<<*it<<" ";
    }
cout<<endl;

cout<<"Searching in unordered_Set->"<<endl;
cout<<"Find the element You are in Search for->";
int k;
cin>>k;
 if(un.find(k)!=un.end())
    {
        cout<<k<<" is present";
    }
    else
    {
        cout<<k<<" is not present";
    }
    cout<<endl;

}

/* OUTPUT:
enter unordered_set size->6
enter Value->10    
enter Value->8
enter Value->12
enter Value->1
enter Value->10
enter Value->7

Size of unordered_Set ->5
display unordered_Set elements->
7 10 8 12 1
Searching in unordered_Set->
Find the element You are in Search for->15
15 is not present
*/