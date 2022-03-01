/*

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

Time complexity

Insertion : O(1)

In Case of Non Negative Numbers we have to check only 32 bits to insert a number
So Time Complexity will be O(32) that is equivalent to constant Time

Searching : O(1)

It is same as insertion we only have to check atmax 32 bits in case of searching to
check if a number is present or not So O(32) if equivalent to constant

*/

#include<iostream>
#include<vector>

using namespace std;

class node {

public: 
// Their will be only two member of node because for each bit of a number Their are 
// two possibilities either set or unset
	node* left;
	node* right;

	node() {
		left = right = NULL;
	}
};


class trie {
	node* root;

public:

	trie() {
		root = new node();
	}

	// member function to insert a number in Trie
	void insert(int n) 
	{
		node* temp = root;
		for(int i=31; i>=0; i--) 
		{
			int bit = (n>>i)&1;
			// ith bit of given integer n is not set i.e. 0
			if(!bit) 
			{
				// temp node doesn't have a left child (unset bit) means ith bit of n is not their
				// so insert it
				if(!temp->left) {
					temp->left = new node();
				}
				// go to next bit
				temp = temp->left;
			// ith bit of given interger n is set i.e. 1
			} else {
				// temp node doesn't have a right child (set bit) means ith bit of n is not their
				// so insert it
				if(!temp->right) {
					// temp node doesn't have a right child
					temp->right = new node();
				}
				temp = temp->right;
			}
		}
	}

	// member function to search a number in Trie
	bool search(int n) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (n>>i)&1;
			// if ith bit of n is unset i.e. 0
			if(!bit) {
				// temp node doesn't have a left child i.e. it doesn't have a child node
				// with the a unset bit i.e. 0 So return false
				if(!temp->left)
					return false;
				// temp node have a unset bit so move to it to search furthur
				temp = temp->left;
			}
			// else ith bit of n is set i.e. 1 
			else {
				// temp node doesn't have a right child i.e. it doesn't have a child node
				// with a set bit i.e.  So return false
				if(!temp->right)
					return false;
				// temp node have a set bit so move to it to search furthur
				temp = temp->right;
			}
		}

		return true;
	}
};

int main() {

	vector<int> A = {22, 10, 2, 8, 5, 3};
	trie t;

	for(auto x:A)
		t.insert(x);

	vector<int> B = {1, 2, 5, 10, 25, 0};

	for(auto x:B) {
		// If current element of B is present in Trie print x present otherwise not present
		t.search(x) ? cout << x << " present " << endl :
		                 cout << x << " not present" << endl;
	}

	return 0;
}