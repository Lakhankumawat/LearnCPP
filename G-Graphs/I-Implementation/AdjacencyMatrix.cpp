//---- create and display an adjacency matrix ----//

#include<iostream>

using namespace std;
#define Max 100
int adj[Max][Max];
int n;

int main()
{
    int max_edges,i,j,origin,destin;
    int graph_type;
    cout<<"Enter 1 for undirected graph or 2 for dirtected graph : ";
    cin>>graph_type;
    cout<<"Enter number of vertices : ";
    cin>>n;
    if(graph_type==1)
       max_edges=n*(n-1)/2;
    else
       max_edges=n*(n-1);
    for(i=1;1<=max_edges;i++){
        cout<<"Enter -1 -1 to exit or edge "<<i<<" origin and destination : "<<endl;
        cin>>origin>>destin;
        if((origin==-1) && (destin==-1))
        break;
        if(origin>=n||destin>=n||destin<0||origin<0)
        {
            cout<<"invalid vertex"<<endl;
            i--;
        }
        else{
            adj[origin][destin]=1;
            if(graph_type==1)
            adj[destin][origin]=1;
        }
    }
    cout<<"Adjacency matrix"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"\t"<<(adj[i][j]);}
        cout<<endl;
    }

    return 0;
}