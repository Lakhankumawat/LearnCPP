

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

    void bfs(T src){
    map<T,int> visited;
    queue<T> q;


    q.push(src);
    visited[src]=true;

     //While Queue us not empty
     while(!q.empty()){

        //Remove start node from q get nbrs keep rollin
        T node = q.front();
        q.pop();
        // l[node] will give me the list of nodes which are nbr of nodes see map above
        cout<<node<<" ";
        for(int nbr:l[node]){
            if(!visited[nbr]){
                q.push(nbr);

                //Mark that nbr as visited
                visited[nbr]=true;
            }
        }

     }

    }
};

int main(){

Graph<int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(2,3);

g.bfs(0);

return 0;
}