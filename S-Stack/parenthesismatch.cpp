// C++ code for parenthesis matching.
#include <iostream>
#include <stack>
using namespace std;

// Function to check if parenthesis are balanced.
bool isParenthesisMatch(string expr)
{
	stack<char> s;
	char x;

	// Traversing the Expression.
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			// Push the element in the stack
			s.push(expr[i]);
			continue;
		}

		/** If current character is not opening bracket it must closing bracket.
        So stack should not be empty while popping. **/
		if (s.empty())
			return false;

        // Switch cases to check matching.
		switch (expr[i]) {
		case ')':
			
			// Store the top element in x.
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in x.
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in x
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check at end stack is empty.
	return (s.empty());
}

// Driver code
int main()
{
	string expr = "{()}[]";

	// Function call
	if (isParenthesisMatch(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
