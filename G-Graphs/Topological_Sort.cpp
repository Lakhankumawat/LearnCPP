#include<iostream>
using namespace std;
#include<list>
#include<vector>
#include<queue>

class Graph{
//Graph of type having total vertex and a list of adj. list 
    int V;
    list<int> *l;

public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void add_edge(int x,int y, int dir = 0){
        //Push that edge in both nodes places
        //if dir = 1 ---> directed graph
        l[x].push_back(y);
        if(dir == 0)
        {
            l[y].push_back(x);
        }
    }

    void print_graph(){
    //Iterate over the vertices and print list is a good idea
        for (int i = 0; i < V; i++)
        {
            /* code */
            cout<<"Vertices : "<<i<<"->";
            for(auto nbr:l[i]){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }


    vector<int> topo_sort()
    {
        vector<int> indegree(V, 0);
        vector<int> result;

        //counting the number of indegrees
        for (int i = 0; i < V; i++)
        {
            for(auto nbr : l[i]) {
                indegree[nbr]++;
            }
        }

        queue<int> q;
        for(int i = 0; i<V; i++)
        {
            if(indegree[i] == 0) q.push(i);
        }

        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            result.push_back(u);
            for(auto v : l[u])
            {
                indegree[v]--;
                if(indegree[v] == 0) q.push(v);
            }
        }

        if(result.size() == V)
            return result;
        else
            return {};  //topological ordering not possible
    }

};



int main(){
    //Main program driver code:
    int v, e;
    cout<<"Enter the number of vertices and edges: ";
    cin>>v>>e;
    Graph g(v);
    int x, y;
    cout<<"Enter the edges: \n";
    while(e--){
        cin>>x>>y;
       g.add_edge(x, y, 1);
    }

    //Printing the ordering
    vector<int> ordering = g.topo_sort();

    if(ordering.size() == 0) cout<<"Topological Sort not possible.\n";
    cout<<"Topological ordering is: ";
    for(int i=0; i<ordering.size(); i++)
    {
        cout<<ordering[i]<<" ";
    }

    return 0;
}