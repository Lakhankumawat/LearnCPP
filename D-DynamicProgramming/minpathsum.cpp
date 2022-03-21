#include <bits/stdc++.h>
#include<climits>
using namespace std;

 
    int minpathSum(int** grid,int i,int j,int r,int c,int** dp)
    {
    	if(i>=r || j>=c)
    	{
    		return 9999999;              //Whenever we reach the out of bounds of grid we return maximum value.Why because our calculations must be whithin bounds so we return max value
		}
		
		 if(i==r-1 && j==c-1)           //This is the base case .Here we are going to return last value when we we reach at the end
        {
            return grid[i][j];
        }
        if(dp[i][j]!=-1)               //checking whether we calculated already if yes then we return the value
        {
            return dp[i][j];
        }                                                         //else
        int x=grid[i][j]+minpathSum(grid,i+1,j,r,c,dp);          //It calculates while moving downward direction
        int y=grid[i][j]+minpathSum(grid,i,j+1,r,c,dp);          //It calculates while moving forward direction
        int count=min(x,y);                                      //This is the recurrence relation ,Out of two possible ways we takes the minimum value
        dp[i][j]=count;                                          //Storing the value in dp
        return count;
	}

    
    int minpath(int **grid,int r,int c)     //This is the function which return minimum sum
    {
    	
 	    int **dp = new int*[r];              //  This is dp array  we are going initialize with -1
   	                                        //   It us useful when ever repeatitions occurs while recursion
    	                                   //    we can get value from dp array so that we dont need calculate the value again.
    	                                  //     It reduces the Time complexity
    	for(int i=0;i<r;i++)
    	{
    		dp[i]=new int[c];
		}
    	for(int i=0;i<r;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			dp[i][j]=-1;
			}
		}
		
		int sum=minpathSum(grid,0,0,r,c,dp);
		return sum;
	}
int main()
{
	cout<<"Enter number of rows :";
	int r;
	cin>>r;          //Taking input number of rows
	cout<<"Enter the number of columns :";
	int c;
	cin>>c;         //Taking input number of columns

	int** grid =new int*[r];  //Dynamic initialization of 2d grid
	for(int i=0;i<r;i++)
	{
		grid[i]=new int[c];   //Initializing each column
	}
		cout<<"Enter the Grid :"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>grid[i][j];   //Taking input of values
		}
	}
	
	cout<<"The Minimum path sum :"<<minpath(grid,r,c)<<endl;
}
