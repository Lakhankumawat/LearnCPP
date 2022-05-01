// /* Set in C++ -->

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    set<int>s;
    cout<<"enter set size->";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cout<<"enter Value->";
        cin>>val;
        s.insert(val);
    }
    cout<<endl;

    cout<<"Size of Set ->"<<s.size()<<endl;

    cout<<"display Set elements->"<<endl;
     for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
cout<<endl;

cout<<"Searching in Set->"<<endl;
cout<<"Find the element You are in Search for->";
int key;
cin>>key;
 if(s.find(key)!=s.end())
    {
        cout<<key<<" is present";
    }
    else
    {
        cout<<key<<" is not present";
    }
    cout<<endl;
}

/* OUTPUT:
enter set size->5
enter Value->1
enter Value->2
enter Value->3
enter Value->4
enter Value->5

Size of Set ->5       
display Set elements->
1 2 3 4 5 
Searching in Set->    
Find the element You are in Search for->4
4 is present

*/
