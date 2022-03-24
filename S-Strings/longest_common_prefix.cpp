/* longest_common_prefix.cpp
Author : Selsabeel Asim Ali Elbagir
Date created: 24/03/2022
Purpose: Calculate the longest common prefix (first characters in common) between two strings.
If there are no first characters in common, tell the user so.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first, second;
	bool isMatching = true;
	int i = 0;
	cout << "Please enter the first string: ";
	getline(cin, first);
	cout << endl;
	cout << "Please enter the second string: ";
	getline(cin, second);
	
	while (isMatching)
	{
		if (first[i] == second[i]) {
			cout << first[i];
			i += 1;
		}
		else {
			isMatching = false;
			if (i == 0)
			{
				cout << "No matching letters.";
			}
		}
	}
	return 0;
}
