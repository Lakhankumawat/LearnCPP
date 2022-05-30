#include<iostream>
using namespace std;
int count_of_subsets(int arr[], int n, int sum){
    //declaring the matrix
    int t[n+1][sum+1];
    //Initializing the first row and column of the matrix
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=sum; j++){
            if(i==0){
                t[i][j] = 0;
            }
            if(j==0){
                t[i][j] = 1;
            }
        }
    }
    // Filling other rows and columns
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=sum; j++){
            //if value is less than the sum
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum]; //returning the result

}

int main(){
    int n = 6;
    int a[] = {2,3,5,6,8,10};
    int sum = 10;
    cout<<count_of_subsets(a,n,sum)<<endl;
     return 0;
}