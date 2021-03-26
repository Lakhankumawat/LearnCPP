

#include<map>
#include<queue>
#include<list>
#include<iostream>
using namespace std;

template<typename T>
class Graph{

map<T,list<T> > l;

public:
    void addEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
    }
    /* Here is below function we don't want to create a copy of visited map
    in fact we want it to remain same so we have passed argument by value
    rather than by reference */
    void dfs_helper(T src,map<T,bool> &visited){
        //recursive function that will traverse the graph

        cout<<src<<" ";
        visited[src]=true;
        //Go to all nbr of that node which are not visited
        for(T nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }

    }

    void dfs(T src){
    map<T,bool> visited;
    //Mark all the nodes a not visited in the beginning
    for(auto p:l){
        T node =p.first;
        visited[node]=false;
    }

  //Call the helper function
 dfs_helper(src,visited);


    }
};

int main(){

Graph<int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(2,3);
g.addEdge(3,4);
g.addEdge(4,5);
g.addEdge(3,0);

g.dfs(0);

return 0;
}