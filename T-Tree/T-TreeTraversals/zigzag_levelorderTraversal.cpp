/**
* Algorithm that traverses a binary tree from left to right then from right to left for the next leveland alternate between. (Zigzag way)
* Time Complexity: O(n)
* Space Comlpexity: O(n) + O(n) = O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	// Attributes
	int val;
	Node* left, * right;

	//Constructors
	Node() : val(0), left(nullptr), right(nullptr) {}
	Node(int v) : val(v), left(nullptr), right(nullptr) {}
	Node(int v, Node* left, Node* right) : val(v), left(left), right(right) {}
};

vector<Node*> inputTree(string in) {
	vector<Node*> vec;
	stringstream s(in); // create a stream
	string subS;
	while (s >> subS) {
		if (subS == "null")
			vec.push_back(nullptr);
		else
		{
			int tempVal = stoi(subS);
			Node* newNode = new Node(tempVal);
			vec.push_back(newNode);
		}
	}

	return vec;
}

// Creating tree from level order input
Node* createTree(string in)
{
	vector<Node*> vec = inputTree(in);
	Node* root = nullptr;
	queue<Node*> q;   // Queue to store nodes
	for (int i = 0; i < vec.size(); i++) {
		if (root == nullptr)
			root = vec[i];
		else if (q.front()->left == nullptr)
			q.front()->left = vec[i];
		else {
			q.front()->right = vec[i];
			q.pop(); // pop as we checked left and right for the node.
		}
		q.push(vec[i]);
	}
	return root;
}

void zigzagLevelOrder(Node* root) {

	bool rightLeft = true; // level direction

	vector<int>level;
	queue<Node*>q;

	if (root != nullptr)
		q.push(root);

	while (!q.empty()) {

		int s = q.size(); //save size of queue indicates the number of nodes in previous level.
		rightLeft = !rightLeft; //alternate direction in each level.

		while (s--) {
			Node* temp = q.front(); // temporary node to same the current node popped from the queue.
			q.pop();

			Node* l = temp->left, * r = temp->right;

			if (l != nullptr)
				q.push(l);

			if (r != nullptr)
				q.push(r);

			level.push_back(temp->val);
		}
		if (rightLeft)
			reverse(level.begin(), level.end());

		for (int i = 0; i < level.size(); i++)
			cout << level[i] << ' ';

		level.clear();
	}
}

int main() {

	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	string in;
	cout << "Enter level order input (input 'null' for null nodes): ";
	getline(cin, in);
	Node* root = createTree(in);
	zigzagLevelOrder(root);



	/* Test 1

		Input: 3 9 20 null null 15 7

			3
		  /	  \
		9	   20
			  /  \
			15	  7


		Output: 3 20 9 15 7
	*/


	/* Test 2

		Input: 1 2 3 7 6 5 4

			1
		  /	   \
		 2	    3
		/ \    /  \
	   7   6  5    4

		Output: 1 3 2 7 6 5 4
	*/

	return 0;
}