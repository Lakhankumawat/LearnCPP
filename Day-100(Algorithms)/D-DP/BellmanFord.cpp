#include <bits/stdc++.h>

using namespace std;

struct node
{
	int a,b,w;
};

#define INF 99
typedef vector<node> vs;
typedef vector<vector<long>> vv;
int parent[1000];
void shortestPath(int i, int j){
	if(i != j)
		shortestPath(i, parent[j]);
	cout<<j+1<<" ";

	return ;
}


void bellmanFord(vv g, int n, int src, int des){

	vector<long> dis(n,INF);

	dis[src] = 0;
	for(int i=0;i<n;i++){
		parent[i] = i;
	}
	for(int k =0;k<n-1;k++){
		for(int i =0;i<n;i++){
			for(int j=0;j<n;j++){
				long long temp = dis[i] + g[i][j];
				if(temp < dis[j]){
					dis[j] = temp;
					parent[j] = i;
				}
			}
		}
	}


	bool flag = false;

	for(int i =0;i<n;i++){
			for(int j=0;j<n;j++){
				long temp = dis[i] + g[i][j];
				if(dis[i] != INF && temp < dis[j]){
					flag = true;
					break;
				}
			}
		}

	if(!flag){
		 for (int i = 0; i < n; i++){
        	cout << "The distance of vertex " << i+1 << " from the source is "<< dis[i];
        	     cout<< ". Its path is [ ";
        	shortestPath(src, i); cout << "]" << endl;
    	}
    	cout<<"\n\n";
    	//shortestPath(src,des);
	}else{
		cout<<"Negative Cycle Found \n\n";
	}

}

int main(){

	int n = 4;
	vv g = { { 0, 10, 5, 3 },
            { 1, 0, INF, INF },
            { INF, 2, 0, INF },
            { INF, INF, 2, 0 } };

    bellmanFord(g,n,0,1);
 }