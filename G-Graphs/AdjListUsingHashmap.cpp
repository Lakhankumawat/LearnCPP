#include<iostream>
#include<list>
#include<cstring>
#include<unordered_map>
using namespace std;

class Graph{
//Graph of type having total vertex and a list of adj. list 
unordered_map<string,list<pair<string,int>>> m;

public:
 void addEdge(string x,string y,bool bidir,int wt){

     m[x].push_back(make_pair(y,wt));
     if(bidir==true){
       m[y].push_back(make_pair(x,wt));     
     }
 }

 void printGraph(){
     for(auto c:m){
         string src=c.first;
         cout<<"from "<<src<<" to ";
         list<pair<string,int>> nbr=c.second;
         for(auto s:nbr){
             cout<<s.first<<" "<<s.second<<" to ";
         }
         cout<<endl;
     }
 }

};

int main(){
    //Main program driver code:
   Graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("B","C",true,30);
    g.addEdge("A","C",false,40);
    g.addEdge("D","B",false,50);
    
    g.printGraph();
    return 0;
}