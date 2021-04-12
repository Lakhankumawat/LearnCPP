
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
void solve(){
int v,e,no;
cout<<"Enter the vertices and number of edges in graph"<<endl;
cin>>v>>e;
vector<vector<int>> g(v);
cout<<"Enter Edges A-B"<<endl;
for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
}

int res[v]; //Resultant Array to check which of the nodes are colored
bool available[v]; //Available array to check availability of color
res[0]=0; // Initial node is colored 0

for(int i=1;i<v;i++) res[i]=-1; // Rest all are not colored
for(int i=0;i<v;i++) available[i]=false; //Rest all available colors to false

int cn=0; //Chromatic number

for(int i=1;i<v;i++){
    for(auto x:g[i]){
        if(res[x]!=-1){
            available[res[x]]=true;
        }
    }

    int cr; //Color to keep track of each color

    for(cr=0;cr<v;cr++){
        if(available[cr]==false)
            break;
    }

    res[i]=cr;
    cn=max(cn,cr+1);

    //Revert back all selected availability for next node

    for(auto x:g[i]){
        if(res[x]!=-1){
            available[res[x]]=false;
        }
    }
}
cout<<"Chromatic Number : "<<cn<<endl;

//Return colored graph resultant array
cout<<"Chromatic Array : "<<endl;
for(int i=0;i<v;i++) cout<<res[i]<<" ";

}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    solve();
    return 0;
}



