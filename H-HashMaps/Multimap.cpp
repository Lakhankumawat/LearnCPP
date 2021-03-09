
#include<map>
#include<iostream>
using namespace std;

int main(){
int n;
char c;
string s;

multimap<char,string> m;
/*Multimap can be used to store multiple values
for the same key */

cin>>n;

for(int i=0;i<n;i++){
    cin>>c>>s;
    m.insert(make_pair(c,s));

    }


    for (auto p:m)
        cout<<p.first<<" -> "<<p.second<<endl;



    //To erase an object from multimap
    auto it =m.begin();
    //cout<<it<<" will be removed";
    m.erase(it);

    auto it2=m.lower_bound('D'); //dog
    auto it3=m.upper_bound('D'); //Eyes

    for(auto it4=it2;it4!=it3;it4++)
        cout<<it4->second<<" , ";
   cout<<endl;
   cout<<"Cat Removed "<<endl;
    auto f=m.find('C');
    if(f->second=="Cat")
        m.erase(f);

    for (auto p:m)
        cout<<p.first<<" -> "<<p.second<<endl;
return 0;
}
/* -----INPUT-----
5
A Apple
B Banana
C Cat
D Dog
E Eyes

//------OUTPUT-----

A -> Apple
B -> Banana
C -> Cat
D -> Dog
E -> Eyes
Dog ,
Cat Removed
B -> Banana
D -> Dog
E -> Eyes
*/

