#include<iostream>
using namespace std;
#include<list>

class Graph{
//Graph of type having total vertex and a list of adj. list 
int V;
list<int> *l;
public:
Graph(int V){
    this->V=V;
    l=new list<int>[V];
}

void add_edge(int x,int y){
    //Push that edge in both nodes places

    l[x].push_back(y);
    l[y].push_back(x);
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

};

int main(){
    //Main program driver code:
    Graph g(4);
    g.add_edge(1,0);
    g.add_edge(2,3);
    g.add_edge(3,1);
    g.add_edge(1,2);
    

//Printing the graph
    g.print_graph();

    return 0;
}