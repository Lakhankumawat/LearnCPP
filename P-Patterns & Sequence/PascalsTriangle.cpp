#include<iostream>
#include<vector>
#define pb push_back
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r; //resultant vector
        
       for(int i=0;i<numRows;i++){
           vector<int> r1(i+1,1);
           
           r.pb(r1);
           
           if(i>=2){
               for(int j=1;j<i;j++){
                   r[i][j]=r[i-1][j-1]+r[i-1][j];
               }
               
           }
           
       } 
        return r;
    }
};


int main(){
    /*--------DRIVER CODE---------*/
    Solution s1;
    int numRows,i,j;
    cout<<"Enter number of rows you want to print Pascal's Triangle : ";
    cin>>numRows;
    vector<vector<int>> res=s1.generate(numRows);
    
    for(auto c:res){
    for(auto k:c)
    cout<<k;
    cout<<endl;}
    
    return 0;
    
}
