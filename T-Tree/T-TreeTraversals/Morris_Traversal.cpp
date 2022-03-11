/* Function to traverse binary tree without recursion and without stack */
#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left_node;
	struct Node *right_node;
};

/**
 * @brief Morris function In this Function, links are created as successors and nodes are printed using these links. Finally, the changes are reverted back to restore the original tree.
 *
 * @param root
 */

void Morris(struct Node *root)
{
	struct Node *curr, *prev;

	if (root == NULL)
		return;
	// initialize curr equal to root
	curr = root;

	while (curr != NULL)
	{
		//  if left not exists
		//  print curr
		if (curr->left_node == NULL)
		{
			cout << curr->data << endl;
			curr = curr->right_node;
		}
		//  if left are present
		else
		{

			/* Find the previous (prev) of curr */
			prev = curr->left_node;
			while (prev->right_node != NULL && prev->right_node != curr)
			{
				prev = prev->right_node;
			}
			/* Make curr as the right child of its
			previous */
			// create temporary link between prev->right to curr
			if (prev->right_node == NULL)
			{
				prev->right_node = curr;
				curr = curr->left_node;
			}

			/* fix the right child of previous */
			// remove temprorary link
			else
			{
				prev->right_node = NULL;
				cout << curr->data << endl;
				curr = curr->right_node;
			}
		}
	}
}

/**
 * @brief add_node function are create new node
 *
 * @param data
 * @return struct Node*
 */
struct Node *add_node(int data)
{
	struct Node *node = new Node;
	node->data = data;
	node->left_node = NULL;
	node->right_node = NULL;

	return (node);
}

// Driver Program to test above functions
int main()
{
       //Tree is built like the example
	struct Node *root = add_node(2);
	root->left_node = add_node(5);
	root->right_node = add_node(8);
	root->left_node->left_node = add_node(4);
	root->left_node->right_node = add_node(3);
	// call morris function
	Morris(root);
	return 0;
}
