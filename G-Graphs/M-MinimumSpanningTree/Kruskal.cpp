#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class edge{
 public:
     int src;
     int dest;
     int weight;
};

bool compare(edge e1, edge e2){
    return e1.weight<e2.weight;

}

//To find the parent of a given index recursively
int findparent(int index,int *parent){
if(parent[index]==index)return index;
return findparent(parent[index],parent);

}

void Kruskal(edge *a,int n, int E){
sort(a,a+E,compare);
//Array to store parents and the value of parents of each element is set to its index
int *parent = new int[n];
for(int i=0;i<n;i++){
    parent[i]=i;
}
edge *output = new edge[n-1];



int counter = 0,i=0;
while(counter!=n-1){
    edge current = a[i];
    //To check if we can add current edge in MST or not
    int srcparent = findparent(current.src,parent);
    int destparent = findparent(current.dest,parent);
    if(srcparent!= destparent){
        output[counter]= current;
        counter++;
        parent[srcparent]= destparent;
    }
    i++;

}

cout<<"Minimum Spanning Tree :"<<endl<<"src"<<" dest "<<"weight"<<endl;
for(int j=0;j<n-1;j++){
     if(output[j].src<output[j].dest)
    cout<<output[j].src<<" "<<output[j].dest<<" "<<output[i].weight<<endl;
    else
        cout<<output[j].dest<<" "<<output[j].src<<" "<<output[i].weight<<endl;
}


}




int main(){
int n,E;
cin>>n>>E;
edge *Arr = new edge[E];
for(int i=0;i<E;i++){
    cin>>Arr[i].src>>Arr[i].dest>>Arr[i].weight;
}

Kruskal(Arr,n,E);
}