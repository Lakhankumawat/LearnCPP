//---- Computing path matrix from powers of adjacency matrix ----//

#include<iostream>

using namespace std;
#define MAX 100 // defining MAX as 100
int adj[MAX][MAX]; // declaring adj[][] 2d array globally
void display(int matrix[MAX][MAX]);
void create();
void power_matrix(int p , int result[MAX][MAX]);
void multiply(int matrix1[MAX][MAX] ,int matrix2[MAX][MAX] ,int result_matrix[MAX][MAX]);
int n;

int main()
{
    int result[MAX][MAX];  // declaring result materix (2d array) for storing the power adjacency matrix
    int x[MAX][MAX],path[MAX][MAX],i,j,power; // declaring path matrix to store the entries as 1 path present & x matrix for end result
    create(); // create function to create graph adjacency matrix
    cout<<"adjacency matrix : "<<endl;
    display(adj); // display the user defined graph adjacency matrix
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            x[i][j]=0; // initialising entires as zero
        }
    }
    for(power=1;power<=n;power++){ // calulating result matrix for each power of adjacency matrix
        power_matrix(power,result);
        cout<<"adjacency matrix raised to power "<<power<<" : "<<endl;
        display(result); // displaying result matrix for each power of adjacency matrix
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){ 
                x[i][j] = x[i][j] + result[i][j]; // upadating by adding to get total paths
            }
        }
    }
    cout<<"Result matrix is : "<<endl;
    display(x); // matrix showing total paths between vertices
    for(i=0;i<n;i++){ //updating path matrix to store the entries as 1 if atleast 1 path present between vertices
        for(j=0;j<n;j++){
            if(x[i][j]==0)
             path[i][j]=0;
            else
             path[i][j]=1;
        }
    }
    cout<<"the path matrix is : "<<endl;
    display(path); // displaying path matrix
    
    return 0;
}
void create(){ // create function to create graph adjacency matrix
    int max_edges,i,origin,destin;
    cout<<"Enter number of vertices : ";
    cin>>n;
    max_edges=n*(n-1);
    for(i=1;i<=max_edges;i++){
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
        }
    }
}
// compute pth power of matrix and store
void power_matrix(int p , int result[MAX][MAX]){
    int i,j,k,tmp[MAX][MAX];
    for(i=0;i<n;i++){ //copy all the entrires of adjacency matrix to result matrix
        for(j=0;j<n;j++){
            result[i][j]=adj[i][j];
        }
    }
    for(k=1;k<p;k++){//obtain matrices for all powers .
        multiply(result,adj,tmp);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                result[i][j]=tmp[i][j]; 
            }
        }
    }
}

void multiply(int matrix1[MAX][MAX] ,int matrix2[MAX][MAX] ,int result_matrix[MAX][MAX]){
    //by multiply result matrix obtain in each step by adjacency matrix .
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            result_matrix[i][j]=0;
            for(k=0;k<n;k++){
            result_matrix[i][j]=result_matrix[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void display(int matrix[MAX][MAX]) {// displaying matrix
    int i , j ;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"\t"<<(matrix[i][j]);}
        cout<<endl;
    }
}