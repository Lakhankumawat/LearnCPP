#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#include<algorithm>
//Logic - dsu to maintain a set so we can add edges to it without getting into a cycle

class DSU{

    //pointer to parent and rank of a node
    //Union by rank approach
    int *parent;
    int *rank;

    public:
        DSU(int n){
            //initalising the parent and rank array
            parent = new int[n];
            rank=new int[n];

            //parent -1, rank 1
            for(int i=0;i<n;i++){
                parent[i]=-1;
                rank[i]=1;
            }  
        }

        //If find does not make sense then you need to watch DSU videos
        int find(int i){
            if(parent[i]==-1){
                return i;
            }

            return parent[i]=find(parent[i]);
        }

        //Unite function

        void Unite(int x,int y){
            int s1=find(x);
            int s2=find(y);

            if(s1!=s2){
                //Union by rank
                
                if(rank[s1]<rank[s2]){
                    parent[s1]=s2;
                    rank[s2]+=rank[s1];
                }
                else{
                    parent[s2]=s1;
                    rank[s2]+=rank[s1];
                }

            }
        }
};

class Graph{

        //Instead of building a adj list 
        //we will maintain a edgelist ,cause we want to sort the edges on the basis of weight log(n)
        //(u,v,w),(u1,v1,w1).....
        vector<vector<int>> edgelist;
        int V;

        public:
            Graph(int V){
                this->V=V;
            }

            //Sorting based on element present in 0th index so weight first
            void addEdge(int x,int y,int w){
                edgelist.push_back({w,x,y});
            }

             int kruskal_mst(){

                 //Main logic - way too easy

                 //sorting edge list based on weight

                 sort(edgelist.begin(),edgelist.end());

                //Init a DSU
                DSU s(V);

                 int ans=0;
                 for(auto edge:edgelist){

                     int w=edge[0];
                     int x=edge[1];
                     int y=edge[2];
                    
                    //Take this edge in MST if it does not form a cycle
                    

                     if(s.find(x)!=s.find(y)){
                         s.Unite(x,y);
                         ans+=w;
                     }
                
                 }

                return ans;
             }

};

int main(){

    int n,m,x,y,w;
    cin>>n>>m;
    Graph g(n);
    for (int i = 0; i < m; i++)
    {   
        cin>>x>>y>>w;
        g.addEdge(w,x,y);
    }
    
    cout<<g.kruskal_mst()<<endl;
}