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

Node* createNode(int value) {
	return new Node(value);
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

	// Test 1

	/*
	*		3
	*	  /	  \
	*	9	   20
	*		  /  \
	*		15	  7
	*/

	Node* root1 = new Node(3);
	root1->left = createNode(9);
	root1->right = createNode(20);
	root1->right->left = createNode(15);
	root1->right->right = createNode(7);

	zigzagLevelOrder(root1); // 3 20 9 15 7

	// Test 2

	/*
	*		 1
	*	  /	   \
	*	 2	    3
	*	/ \    /  \
	*  7   6  5    4
	*/

	cout << "\n-----------------\n";

	Node* root2 = new Node(1);
	root2->left = createNode(2);
	root2->right = createNode(3);
	root2->left->left = createNode(7);
	root2->left->right = createNode(6);
	root2->right->left = createNode(5);
	root2->right->right = createNode(4);

	zigzagLevelOrder(root2); // 1 3 2 7 6 5 4

	return 0;
}