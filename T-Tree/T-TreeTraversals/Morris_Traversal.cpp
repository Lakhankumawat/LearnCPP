#include <iostream>
using namespace std; 

struct Node { 
	int data; 
	struct Node* left_node; 
	struct Node* right_node; 
}; 

void Morris(struct Node* root) 
{ 
	struct Node *curr, *prev; 

	if (root == NULL) 
		return; 

	curr = root; 

	while (curr != NULL) { 

		if (curr->left_node == NULL) { 
			cout << curr->data << endl; 
			curr = curr->right_node; 
		} 

		else { 

			/* Find the previous (prev) of curr */
			prev = curr->left_node; 
			while (prev->right_node != NULL && prev->right_node != curr) {
				prev = prev->right_node; 
            }
			/* Make curr as the right child of its
			previous */
			if (prev->right_node == NULL) { 
				prev->right_node = curr; 
				curr = curr->left_node; 
			} 

			/* fix the right child of previous */
			else { 
				prev->right_node = NULL; 
				cout << curr->data << endl; 
				curr = curr->right_node; 
			} 
		} 
	} 
} 

struct Node* add_node(int data) 
{ 
	struct Node* node = new Node; 
	node->data = data; 
	node->left_node = NULL; 
	node->right_node = NULL; 

	return (node); 
} 

int main() 
{ 

	struct Node* root = add_node(5); 
	root->left_node = add_node(6); 
	root->right_node = add_node(9); 
	root->left_node->left_node = add_node(3); 
	root->left_node->right_node = add_node(2); 
	Morris(root); 
	return 0; 
} 