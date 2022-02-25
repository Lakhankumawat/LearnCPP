#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph{

    //First node second weight
    vector<pair<int,int>> *l;
    int V;

    public:
    Graph(int n){
        V=n;
        l=new vector<pair<int,int>>[n];
    }

    void addEdge(int x,int y,int w){
        l[x].push_back({y,w});
        l[y].push_back({x,w});
    }
    
    int prims(){
        //Most most important stuff
        //See priority queue implementation
        //First element weight second node , queue sorts on basis of first ele
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;

        //visited array that denotes whether a node is included of not in mst
        //V vertices bool array all false i.e 0
        bool * visited = new bool[V]{0};

        int ans =0;
        //0 based indexing
        Q.push({0,0});

        while(!Q.empty()){

            //Pick out the edge with minimum weight
            auto best=Q.top();
            Q.pop();
            int dest=best.second;
            int weight=best.first;

            if(visited[dest]){
                //Discarding the edge
                continue;
            }
            ans+=weight;
            visited[dest]=1;

            //adding neighbours in the queue
            for(auto x:l[dest]){
                if(visited[x.first]==0){
                    Q.push({x.second,x.first});
                }
            }
        }
        return ans;
    }
        


};

int main(){
    int n,m,x,y,w;

    cin>>n>>m;
    Graph g(n);
    for (int i = 0; i <m; i++)
    {
        cin>>x>>y>>w;
        g.addEdge(x-1,y-1,w);
    }

    cout<<g.prims()<<endl;
    
    return 0;
}