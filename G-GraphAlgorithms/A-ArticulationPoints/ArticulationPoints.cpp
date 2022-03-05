
 #include<bits/stdc++.h>
 using namespace std;

 int V,E;
 
 unordered_map<int,vector<int>>adj;


void DFS(int u,vector<int>& dis,vector<int>& low, vector<int>& parent, 
vector<int>& articulationPoints){

    static int time=0;
    dis[u]=low[u]=time;
    time+=1;
    int child=0;
    for(int v: adj[u]){
        if(dis[v]==-1){ //if v is not visited
            child+=1;
            parent[v]=u;
            DFS(v,dis,low,parent,articulationPoints);
            low[u]=min(low[u],low[v]);
            // case-1 u is root
            if(parent[u]==-1 && child>1){ 
                articulationPoints[u]=true;
            } 
            // case-2 atleast 1 component will get separated
            if(parent[u]!=-1 && low[v]>=dis[u]){
                articulationPoints[u]=true;
            }

        }
        // Ignore child to parent edge
        else if(v!=parent[u]){
            low[u]=min(low[u],dis[v]);
        }
    }
    
}

 void findArticulationPoints(){
     vector<int>dis(V,-1),low(V,-1),parent(V,-1);
     vector<int>articulationPoints(V,false);
     for(int i=0;i<V;i++){
         if(dis[i]==-1){
             DFS(i,dis,low,parent,articulationPoints);
         }
     }
     cout<<"Articulation Points are: ";
     for(int i=0;i<V;i++){
         if(articulationPoints[i]==true){
             cout<<i<<" ";
         }
     }
 }


 int main(){
     cin>>V>>E; //no of vertices and edges
    
     for(int i=0;i<E;i++){
        int src,dst;
        cin>>src>>dst;
        adj[src].push_back(dst);
    }
    findArticulationPoints();
    return 0;

 }

 
 #include<bits/stdc++.h>
 using namespace std;

 int V,E;
 
 unordered_map<int,vector<int>>adj;


void DFS(int u,vector<int>& dis,vector<int>& low, vector<int>& parent, 
vector<int>& articulationPoints){

    static int time=0;
    dis[u]=low[u]=time;
    time+=1;
    int child=0;
    for(int v: adj[u]){
        if(dis[v]==-1){ //if v is not visited
            child+=1;
            parent[v]=u;
            DFS(v,dis,low,parent,articulationPoints);
            low[u]=min(low[u],low[v]);
            // case-1 u is root
            if(parent[u]==-1 && child>1){ 
                articulationPoints[u]=true;
            } 
            // case-2 atleast 1 component will get separated
            if(parent[u]!=-1 && low[v]>=dis[u]){
                articulationPoints[u]=true;
            }

        }
        // Ignore child to parent edge
        else if(v!=parent[u]){
            low[u]=min(low[u],dis[v]);
        }
    }
    
}

 void findArticulationPoints(){
     vector<int>dis(V,-1),low(V,-1),parent(V,-1);
     vector<int>articulationPoints(V,false);
     for(int i=0;i<V;i++){
         if(dis[i]==-1){
             DFS(i,dis,low,parent,articulationPoints);
         }
     }
     cout<<"Articulation Points are: ";
     for(int i=0;i<V;i++){
         if(articulationPoints[i]==true){
             cout<<i<<" ";
         }
     }
 }


 int main(){
     cin>>V>>E; //no of vertices and edges
    
     for(int i=0;i<E;i++){
        int src,dst;
        cin>>src>>dst;
        adj[src].push_back(dst);
    }
    findArticulationPoints();
    return 0;

 }

 