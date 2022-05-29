#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
void iterativedfs(vector<vector<pair<int,int> > >v,vector<bool>visited,int src,stack<pair<int,string> >s){
    string ss; // to keep a track of the traversal
    ss+=char(src+'0');
    s.push(mp(src,ss));
    while(!s.empty()){
        int cursrc=s.top().first;
        string curstr=s.top().second;
        s.pop();
        if(visited[cursrc]==false){ //if the node is not visited then visit it
            visited[cursrc]=true;
            cout<<cursrc<<"@"<<curstr<<"\n";
            for(auto x:v[cursrc]){
                if(visited[x.first]==false)s.push(mp(x.first,curstr+char(x.first+'0'))); //add the unvisited neighbours of the current node in the stack
            }
        }
    }
}
int main(){
    int vertex;cin>>vertex; //accepting the number of vertices of graph
    int edges;cin>>edges; //accepting the number of edges in graph
    vector<vector<pair<int,int> > >v(vertex); // Implementation of graph as adjacency list
    for(int i=1;i<=edges;i++){ //taking input
        int a,b,w;cin>>a>>b>>w;
        v[a].pb(mp(b,w));
        v[b].pb(mp(a,w));
    }
    vector<bool>visited(vertex,false); //creating a visited array to keep a track of nodes in graph which are already visited
    stack<pair<int,string> >s; //Iterative dfs is implemented using stacks
    int src;cin>>src; //taking the value of source : starting point
    iterativedfs(v,visited,src,s); //calling function for iterative depth first search

}