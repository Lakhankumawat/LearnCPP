#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
    vector<int> result;
    int top=0,bottom=r-1,left=0,right=c-1;
    
    while(top<=bottom && left<=right)
    {
        
            for(int i=left;i<=right;i++)  //traversing left to right
            {
                result.push_back(a[top][i]);
            }
            top++;   //incrementing top
            
       
        
            for(int i = top; i<=bottom;i++) //traversing from top to bottom
            {
                result.push_back(a[i][right]);
            }
            right--; //decrementing right
            
        
    
       
            for(int i=right;i>=left;i--) //traversing from right to left
            {
                result.push_back(a[bottom][i]);
            }
            bottom--; //decrementing bottom
            
        
        
            for(int i=bottom;i>=top;i--) //traversing from bottom to top
            {
                result.push_back(a[i][left]);
            }
            left++; //incrementing left
         
        
    }
    return result;
    }
};

// { Driver Code Starts.
int main() {
    
        int r,c;
        cout<<"Enter rows and columns: "<<endl;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 
        cout<<"Enter elements of the matrix: "<<endl;
        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    
    return 0;
}
