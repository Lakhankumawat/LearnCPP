#include <bits/stdc++.h>
using namespace std;
vector<int>printFirstNegativeInteger(vector<int>A, int n ,int k) {
	//---------Finding the first negative in k size size window in the vector USING SLIDING WINDOW APPROACH------

	//deque to make a  movable window 
	deque<int> q;

	//vector of every first negative integer in k size window 
	vector<int> ans;

	//the first loop is made to store something in queue 
	//else everytime 0 will be stored as queue would be empty
	for (int i = 0; i < k; i++) {
		//Index of every -ve integer pushed in deque
		if (A[i] < 0) {
			q.push_back(i);
		}
	}
	//first -ve integer in vector ans by getting front element of deque
	if (q.size()> 0) {
		ans.push_back(A[q.front()]);
	}
	//0 is pushed that is there is no -ve int in k size window
	else {
		ans.push_back(0);
	}
	for (int i = k; i < A.size(); i++) {
		//the last index of window is reached or passed if i - index in queue >=k
		if (!q.empty() && i - q.front() >= k) {
			//making space for next window 
			q.pop_front();
		}
		if (A[i] < 0) {
			q.push_back(i);
		}
		if (q.size() > 0) {
			ans.push_back(A[q.front()]);
		}
		else {
			ans.push_back(0);
		}
	}
	return ans;
}
int main()
{
	int n = 8;
	vector<int>A = { 12,-1,-7,8,-15,30,16,28 };
	int k = 3;
	vector<int>ans = printFirstNegativeInteger(A, n, k);
	for (auto x : ans) {
		cout << x << " ";
	}
	/*OUTPUT
		-1 -1 -7 -15 -15 0 
	*/
	
}
