//-------To find Connencted component in an undirected graph-------//

#include<iostream>
#include<list>

using namespace std ;

class Graph{//Graph class to create Undirected graph
    int n; //number of vertex in the graph
    list<int>* adj; //array pointer of adjacency list

    void dfs(int n,bool checked[]); //applying dfs

 public :
    Graph(int n);
    ~Graph();
    void addEdge(int v, int w); // to add an edge in graph
    void conenctedComponents(); // print connected components of graph
};

void Graph::conenctedComponents(){ // print connected components of graph
    bool* checked = new bool[n]; // initialized all vertices as unchecked
    for (int v = 0; v < n; v++){
        checked[v] =false;
    }
    for (int v = 0; v < n; v++){
        if(checked[v]==false) { //if not checked than apply dfs
            dfs(v,checked); // calling dfs function
            cout<<endl;
        }
    }
    delete[] checked;
}

void Graph::dfs(int v,bool checked[]){
    checked[v] = true;
    cout<<v<<"\t";
    list<int>::iterator i; //for neighbouring vertex
    for ( i = adj[v].begin() ; i !=adj[v].end() ; ++i){
        if (!checked[*i]) // if not checked
        dfs(*i,checked); // applying dfs to unchecked neighbouring vertex
    }
}

Graph::Graph(int n){
    this->n=n;
    adj = new list<int>[n];
}

Graph::~Graph(){
    delete[] adj;
}

void Graph::addEdge(int v,int w){
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main(){
    int n,v,w;
    cout<<"enter the number of vertex"<<endl;
    cin>>n;
    Graph g(n);
    for (int i = 0; i < (n*(n-1)/2); i++)
    {  cout<<"enter edge or -1 -1 to exit  : "; 
    cin>>v>>w;
    if(v==-1&&w==-1){break;}
    g.addEdge(v,w);
    }
    cout<<"Connected Componentes are : "<<endl;
    g.conenctedComponents();
    return 0;
}