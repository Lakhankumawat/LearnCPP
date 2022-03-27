//STEPS:

// 1.Initialize a 2D array a[ ][ ] of size mxn where m is equal to n representing an image in pixels form with each pixel representing it’s color.
// 2.Also initialize two co-ordinates x, y, and a newColor such that 0<x<m && 0<y<n.
// 3.Store the color at coordinates x and y in a variable prevColor.
// 4.Check if color at coordinates x and y i.e. prevColor is already equal to newColor, if so return.
// 5.Else update the color at coordinates x and y as a newColor.
// 6.Make four recursive calls to the function with valid co-ordinates among (x+1, y), (x-1, y), (x, y+1) and (x, y-1).
// 7.Valid coordinates: arr[i][j] is valid(eligible to change its color to newColor) if i>=0 and i<m and j>=0 and j<n and arr[i][j]==temp.
// 8.Print the updated 2D array.

#include<iostream> 
using namespace std; 
  
#define m 3 //rows in given matrix
#define n 3 //columns in given matrix

bool isValid(int i,int j,int arr[][n],int temp)
    {
        if(i>=0 && i<m && j>=0 && j<n && arr[i][j]==temp)
            return true;
        return false;
    }
void dfs(int image[][n],int i, int j,int newColor,int temp)
    {
        image[i][j]=newColor;
        
         //call dfs 4 directionally recursively
        if(isValid(i+1,j,image,temp))
            dfs(image,i+1,j,newColor,temp);
        if(isValid(i,j+1,image,temp))
            dfs(image,i,j+1,newColor,temp);
        if(isValid(i-1,j,image,temp))
            dfs(image,i-1,j,newColor,temp);
        if(isValid(i,j-1,image,temp))
            dfs(image,i,j-1,newColor,temp);
    }

void floodFill(int image[][n], int sr, int sc, int newColor) {
    
     //if newcolor and the image[sr][sc]'s val is same, then no need to do anythings,just return the image matrix
        int prevColor=image[sr][sc];
       
        if(prevColor==newColor)
        return;
    
    //otherwise modify the matrix
        dfs(image,sr,sc,newColor,prevColor);
        return;
    }
  
int main(){ 
    
	int a[m][n];
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[i][j];
	    }
	}

    //x,y are coordinates of the starting point	
	int x,y;
	cin>>x>>y;
	
	int newColor;
	cin>>newColor;
  
    cout<<"Original matrix"<<endl;
	for(int i=0; i<m; i++){ 
        
        cout<<"[ ";
        for (int j=0; j<m; j++) 
           cout<<a[i][j]<<" "; 
        cout<<"]\n"; 
    }
    
    floodFill(a, x, y, newColor); 
	
    cout<<"Modified matrix"<<endl;
    //printing the modified array   
    for(int i=0; i<m; i++){ 
        
        cout<<"[ ";
        for (int j=0; j<m; j++) 
           cout<<a[i][j]<<" "; 
        cout<<"]\n"; 
    } 
}

// Time Complexity: O(n*m) where n*m represents Row*Column. i.e. number image pixels.
// Auxiliary Space: O(1) because we don’t use any auxiliary space in implementation.

// TEST CASES:

// CASE 1:

// INPUT:
// 1 1 1
// 1 1 0
// 1 0 1
// 1 1 2
// OUTPUT:
// [ 2 2 2 ]
// [ 2 2 0 ]
// [ 2 0 1 ]

// CASE 2:

// INPUT:
// 1 0 1
// 1 1 0
// 1 0 1
// 1 1 2
// OUTPUT:
// [ 2 0 1 ]
// [ 2 2 0 ]
// [ 2 0 1 ]


