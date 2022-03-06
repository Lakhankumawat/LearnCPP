#include<iostream>
using namespace std;

bool IsPossible(int** maze, int CurrentRow, int CurrentColumn, int rows, int columns)
{
	//This function checks if it is possible for the rat to move into this postion.
	if ((CurrentRow < rows) && (CurrentColumn < columns) && (maze[CurrentRow][CurrentColumn] == 1))
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool RatInMaze(int** maze, int** path, int CurrentRow, int CurrentColumn, int rows, int columns)
{
	//The following if statement checks if the rat has reached the end of the maze.
	if ((CurrentRow == rows - 1) && (CurrentColumn == columns - 1))
	{
		path[CurrentRow][CurrentColumn] = 1;
		return true;
	}

	/*First we will check if it is possible for the rat to be in the postion
	with the current row and column values.*/
	if (IsPossible(maze, CurrentRow, CurrentColumn, rows, columns))
	{
		//Since the rat can be in this postion we will mark the rat's path with 1.
		path[CurrentRow][CurrentColumn] = 1;

		//By adding 1 to the row value we are checking if the rat can move downwards.
		if (RatInMaze(maze, path, CurrentRow + 1, CurrentColumn, rows, columns))
		{
			return true;
		}

		//By adding 1 to the column value we are checling if the rat can move to its right.
		if (RatInMaze(maze, path, CurrentRow, CurrentColumn + 1, rows, columns))
		{
			return true;
		}

		/*If the above conditions are not executed it means
		that the rat can not move in either direction.
		So we will mark this place in its path and in the maze as 0.*/

		path[CurrentRow][CurrentColumn] = 0;
	}

	return false;
}

int main()
{
	int** maze, ** path, rows, columns;

	cout << "Enter the number of rows in the maze: ";
	cin >> rows;
	cout << "Enter the number of columns in the maze: ";
	cin >> columns;

	//Now, we will dynamically allocate the memory for the maze and the solution path.

	maze = new int* [rows];
	path = new int* [rows];

	int i, j;
	for (i = 0; i < rows; ++i)
	{
		maze[i] = new int[columns];
		path[i] = new int[columns];
	}

	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < columns; ++j)
		{
			maze[i][j] = 1;
			path[i][j] = 0;
		}
	}

	//Now, we will ask the user to input the positons of the obstacles.
	int ObstacleRow, ObstacleColumn, flag = 1;
	char choice = 'y';

	while (flag == 1)
	{
		cout << "Enter the row and column number of the obstacle you would like to add: ";
		cin >> ObstacleRow >> ObstacleColumn;

		if ((ObstacleRow == 1) && (ObstacleColumn == 1))
		{
			cout << "The entrance of the maze can not be blocked.\n";
		}

		else if ((ObstacleRow == rows) && (ObstacleColumn == columns))
		{
			cout << "The exit of the maze can not be blocked.\n";
		}

		else
		{
			maze[ObstacleRow - 1][ObstacleColumn - 1] = 0;
		}

		cout << "Would you like to add another obstacle(y/n): ";
		cin >> choice;

		if (choice == 'y' || choice == 'Y')
		{
			flag = 1;
		}

		else if (choice == 'n' || choice == 'N')
		{
			flag = 0;
		}

		else
		{
			cout << "Invalid input!\n";
			cout << "Would you like to add another obstacle(y/n): ";
			cin >> choice;
		}
	}

	cout << "\nThe maze you have made is:\n\n";
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < columns; ++j)
		{
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}

	//Now we will print the soltion path if it exists.
	if (RatInMaze(maze, path, 0, 0, rows, columns))
	{
		cout << "\nThe rat will take the following path out of the maze:\n\n";

		for (i = 0; i < rows; ++i)
		{
			for (j = 0; j < columns; ++j)
			{
				cout << path[i][j] << " ";
			}
			cout << endl;
		}
	}

	else
	{
		cout << "\nThere is no path out of the maze.";
	}

	return 0;
}