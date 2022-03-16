//Fisher-Yates Algorithm is used to shuffle an array randomly and generate different arrangements of it,such that each arrangement is equally likely to occur.
//Generally,shuffling without this algorithm has a time complexity of O(n^2).
//This algorithm has a time complexity of O(n).

#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


void randomize (int Arr[], int num)
{
	//Use a different seed value so that we don't get same result each time this program is run,
	srand (time(NULL));

	// Start from the last element and swap one by one. We don't need to run for the first element that's why i > 0
	for (int i = num - 1; i > 0; i--)
	{
		// Pick a random index from 0 to i
		int j = rand() % (i + 1);

		// Swap arr[i] with the element at random index
		swap(&Arr[i], &Arr[j]);
	}
}


int main()
{
	int arr[] = {10,9,67,23,45};
	int n=arr.size();
	randomize (arr, n);
	for(int t=0;t<n;t++)
	{
		cout<<arr[t]<<" ";
	}
	cout<<endl;

	return 0;
}

