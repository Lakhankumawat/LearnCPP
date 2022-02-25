

#include<set>
#include<iostream>
using namespace std;

/*------Some Properties of set---------
    1. duplicate values are not there i.e unique data items
    2. it can be of type order or unordered
    3. Updation of values is not possible ,we can remove a particular value and can insert a new
        one on its place but direct updation is not possible.
*/

int main(){
set<int> s;

int arr[]={10,20,11,9,32,10,11};
int n =sizeof(arr)/sizeof(int);

for(int i=0;i<n;i++)
    s.insert(arr[i]);

    //Erase a value
    s.erase(32);

    //We can also use an iterator to erase the value
    auto itr=s.find(9);//Remove 9
    s.erase(itr);

for(set<int>::iterator it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";



return 0;
}

