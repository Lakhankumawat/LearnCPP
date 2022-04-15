#include<iostream>
using namespace std;

int symmetricMatrix()
{
	int i, j, rows, columns, count = 1;
	
	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i >> j;
	
	int symMat[i][j], tMat[i][j];
	
	cout << "\nPlease Enter the Symmetric Matrix Items\n";
	for(rows = 0; rows < i; rows++)	
	{
		for(columns = 0; columns < i; columns++) 
		{
			cin >> symMat[rows][columns];
		}		
	}
	
	for(rows = 0; rows < i; rows++)	
	{
		for(columns = 0; columns < i; columns++) 
		{
			tMat[columns][rows] = symMat[rows][columns];
		}		
	}
 	
	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			if(symMat[rows][columns] != tMat[rows][columns])
  			{
  				count++;
  				break;
			}
		}
  	}

 	if(count == 1)
  	{
  		cout << "\nThe Matrix you have entered is a Symmetric Matrix";
	}
	else
	{
		cout << "\nThe Matrix you have entered is Not a Symmetric Matrix";
	}  	

 	return 0;
}