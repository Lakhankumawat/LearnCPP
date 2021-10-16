#include<bits/stdc++.h>

using namespace std;
typedef vector<vector<int>> vv;
#define INF INT_MAX;
int p[1000][1000];
int d[1000][1000];


void shortestPath(int i, int j){
	if(i != j)
		shortestPath(i, p[i][j]);
	cout<<j+1<<" ";

	return ;
}


void display(int n){

	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(d[i][j] == INT_MAX)
				cout<<"X ";
			else
				cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
}



void floydWarshall(vv &g, int n, int src, int des){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			d[i][j] = g[i][j];
			if(g[i][j] == 0 || g[i][j] == INT_MAX){
				p[i][j] = INT_MAX;
			}else{
				p[i][j] = i;
			}

		}
	}

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(d[i][k] != INT_MAX && g[k][j] != INT_MAX && d[i][j] > (d[i][k] + d[k][j])){
					d[i][j] = d[i][k] + d[k][j];
					p[i][j] = d[k][j];
				}
			}
		}

		cout<<"Pass "<<k+1<<" : \n";

		display(n);

		cout<<"\n";

		
	}

	cout<<"\n\n";

	cout<<"The shortest path between "<<src+1<<" and "<<des+1<<" is : \n";

	shortestPath(src,des);

	cout<<"\nThe Distance is : "<<d[src][des];
}

int main(){

	int n = 4;
	vv g = { { 0, 10, 5, 3 },
            { 1, 0, INT_MAX, INT_MAX },
            { INT_MAX, 2, 0, INT_MAX },
            { INT_MAX, INT_MAX, 2, 0 } };

    floydWarshall(g,n,0,1);
}