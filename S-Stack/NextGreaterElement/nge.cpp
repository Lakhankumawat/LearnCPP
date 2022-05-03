// Print the Next Greater Element (NGE) for each element in an array. The first greater element on the right side of x in the array is the Next greater Element for an element x. Consider the next greater element as -1 for elements for which there is no greater element.


#include <bits/stdc++.h>
using namespace std;

/* prints element and NGE pair for all elements of arr[] of size n */
void printNGE(int arr[], int n)
{
	stack<int> s;

	/* push the first element to stack */
	s.push(arr[0]);

	// iterate for rest of the elements
	for (int i = 1; i < n; i++)
	{

		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}

		/* if stack is not empty, then pop an element from stack.
		If the popped element is smaller than next, then
		a) print the pair
		b) keep popping while elements are
		smaller and stack is not empty */
		while (s.empty() == false
			&& s.top() < arr[i])
		{
			cout << s.top()
				<< " --> " << arr[i] << endl;
			s.pop();
		}

		/* push next to stack so that we can find next greater for it */
		s.push(arr[i]);
	}

	/* After iterating over the loop, the remaining elements in stack do not have the next greater element, so print -1 for them */
	while (s.empty() == false) {
		cout << s.top() << " --> " << -1 << endl;
		s.pop();
	}
	delete []arr;
}

/* Driver code */
int main()
{
	int n;
    	cout<<"Enter size of the array: "<<endl;
    	cin>>n;
    	int* arr=new int[n];
    	cout<<"Enter elements of the array: "<<endl;
    	for (int i = 0; i < n; i++)
    	{
        cin>>arr[i];
    	}
    	cout<<"Next Greater Element Output"<<endl;
	printNGE(arr, n);
	return 0;
}
