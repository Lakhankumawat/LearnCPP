/*
Auther: Adham Mohamed Sayed.
Contact: adham32003200@gmail.com.
Programe Name:Rectangular Checkerboard.
Programe Discription:Printing a shape by astrics.
Last Modification Date: 28 of mar 2022
Version: 2.0
*/

#include <iostream>

using namespace std;
int main()
{
	//Take the width & the height from user
	int width = 0, height = 0;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the height: ";
	cin	>> height;
	//loop through the rows
	for (int i = 1; i < (height + 1); ++i)
	{
		//check if number is odd
		if (i % 2 != 0)
		{
			//loop through the coloumns
			for (int j = 1; j < ((width / 2) + 2); ++j)
			{
				//Print * on the screen
				cout << "* ";
			}
		}
		//check if the number is even
		else if (i % 2 == 0)
		{
			//Print WS at the first of the row 
			cout << " ";
			//loop through the coloumns
			for (int k = 1; k < ((width / 2) + 1); ++k)
			{
				//Print * on the screen
				cout << "* ";
			}
		}
		//Print new line after each row
		cout << "\n";
	}
}