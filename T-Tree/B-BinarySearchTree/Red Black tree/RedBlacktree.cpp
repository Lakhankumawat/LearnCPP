#include <iostream>
#include <queue>
using namespace std;

enum COLOR { RED, BLACK };

class Node {
public:
int val;
COLOR color;
Node *left, *right, *parent;

Node(int val) : val(val) {
	parent = left = right = NULL;

	color = RED;
}

// returns pointer to uncle
Node *uncle() {
	if (parent == NULL or parent->parent == NULL)
	return NULL;

	if (parent->isOnLeft())
	return parent->parent->right;
	else
	return parent->parent->left;
}

// check if node is left child of parent
bool isOnLeft() { return this == parent->left; }

// returns pointer to sibling
Node *sibling() {
	// sibling null if no parent
	if (parent == NULL)
	return NULL;

	if (isOnLeft())
	return parent->right;

	return parent->left;
}

// moves node down and moves given node in its place
void moveDown(Node *nParent) {
	if (parent != NULL) {
	if (isOnLeft()) {
		parent->left = nParent;
	} else {
		parent->right = nParent;
	}
	}
	nParent->parent = parent;
	parent = nParent;
}

bool hasRedChild() {
	return (left != NULL and left->color == RED) or
		(right != NULL and right->color == RED);
}
};

class RBTree {
Node *root;

// left rotates the given node
void leftRotate(Node *x) {
	// new parent will be node's right child
	Node *nParent = x->right;

	// update root if current node is root
	if (x == root)
	root = nParent;

	x->moveDown(nParent);

	// connect x with new parent's left element
	x->right = nParent->left;
	// connect new parent's left element with node
	if (nParent->left != NULL)
	nParent->left->parent = x;

	// connect new parent with x
	nParent->left = x;
}

void rightRotate(Node *x) {
	// new parent will be node's left child
	Node *nParent = x->left;

	if (x == root)
	root = nParent;

	x->moveDown(nParent);

	// connect x with new parent's right element
	x->left = nParent->right;
	if (nParent->right != NULL)
	nParent->right->parent = x;

	// connect new parent with x
	nParent->right = x;
}

void swapColors(Node *x1, Node *x2) {
	COLOR temp;
	temp = x1->color;
	x1->color = x2->color;
	x2->color = temp;
}

void swapValues(Node *u, Node *v) {
	int temp;
	temp = u->val;
	u->val = v->val;
	v->val = temp;
}

// fix red red at given node
void fixRedRed(Node *x) {
	if (x == root) {
	x->color = BLACK;
	return;
	}

	Node *parent = x->parent, *grandparent = parent->parent,
		*uncle = x->uncle();

	if (parent->color != BLACK) {
	if (uncle != NULL && uncle->color == RED) {
		parent->color = BLACK;
		uncle->color = BLACK;
		grandparent->color = RED;
		fixRedRed(grandparent);
	} else {
		// Else perform LR, LL, RL, RR
		if (parent->isOnLeft()) {
		if (x->isOnLeft()) {
			// for left right case
			swapColors(parent, grandparent);
		} else {
			leftRotate(parent);
			swapColors(x, grandparent);
		}
		// for left left and left right case
		rightRotate(grandparent);
		} else {
		if (x->isOnLeft()) {
			// for right left case
			rightRotate(parent);
			swapColors(x, grandparent);
		} else {
			swapColors(parent, grandparent);
		}

		// for right right and right left case
		leftRotate(grandparent);
		}
	}
	}
}

// find node that do not have a left child
Node *successor(Node *x) {
	Node *temp = x;

	while (temp->left != NULL)
	temp = temp->left;

	return temp;
}

// find node that replaces a deleted node in BST
Node *BSTreplace(Node *x) {
	// when node have 2 children
	if (x->left != NULL and x->right != NULL)
	return successor(x->right);

	if (x->left == NULL and x->right == NULL)
	return NULL;

	if (x->left != NULL)
	return x->left;
	else
	return x->right;
}

// deletes the given node
void deleteNode(Node *v) {
	Node *u = BSTreplace(v);

	// True when u and v are both black
	bool uvBlack = ((u == NULL or u->color == BLACK) and (v->color == BLACK));
	Node *parent = v->parent;

	if (u == NULL) {
	if (v == root) {
		root = NULL;
	} else {
		if (uvBlack) {
		fixDoubleBlack(v);
		} else {
		if (v->sibling() != NULL)
			v->sibling()->color = RED;
		}
		if (v->isOnLeft()) {
		parent->left = NULL;
		} else {
		parent->right = NULL;
		}
	}
	delete v;
	return;
	}

	if (v->left == NULL or v->right == NULL) {
	if (v == root) {
		v->val = u->val;
		v->left = v->right = NULL;
		delete u;
	} else {
		if (v->isOnLeft()) {
		parent->left = u;
		} else {
		parent->right = u;
		}
		delete v;
		u->parent = parent;
		if (uvBlack) {
		fixDoubleBlack(u);
		} else {
		u->color = BLACK;
		}
	}
	return;
	}

	swapValues(u, v);
	deleteNode(u);
}

void fixDoubleBlack(Node *x) {
	if (x == root)
	// Reached root
	return;

	Node *sibling = x->sibling(), *parent = x->parent;
	if (sibling == NULL) {
	// No sibiling, double black pushed up
	fixDoubleBlack(parent);
	} else {
	if (sibling->color == RED) {
		// Sibling red
		parent->color = RED;
		sibling->color = BLACK;
		if (sibling->isOnLeft()) {
		// left case
		rightRotate(parent);
		} else {
		// right case
		leftRotate(parent);
		}
		fixDoubleBlack(x);
	} else {
		// Sibling black
		if (sibling->hasRedChild()) {
		// at least 1 red children
		if (sibling->left != NULL and sibling->left->color == RED) {
			if (sibling->isOnLeft()) {
			// left left case
			sibling->left->color = sibling->color;
			sibling->color = parent->color;
			rightRotate(parent);
			} else {
			// right left case
			sibling->left->color = parent->color;
			rightRotate(sibling);
			leftRotate(parent);
			}
		} else {
			if (sibling->isOnLeft()) {
			// left right case
			sibling->right->color = parent->color;
			leftRotate(sibling);
			rightRotate(parent);
			} else {
			// right right case
			sibling->right->color = sibling->color;
			sibling->color = parent->color;
			leftRotate(parent);
			}
		}
		parent->color = BLACK;
		} else {
		// 2 black children
		sibling->color = RED;
		if (parent->color == BLACK)
			fixDoubleBlack(parent);
		else
			parent->color = BLACK;
		}
	}
	}
}
// prints inorder recursively
void inorder(Node *x) {
	if (x == NULL)
	return;
	inorder(x->left);
	cout << x->val << " ";
	inorder(x->right);
}

public:
RBTree() { root = NULL; }

Node *getRoot() { return root; }

Node *search(int n) {
	Node *temp = root;
	while (temp != NULL) {
	if (n < temp->val) {
		if (temp->left == NULL)
		break;
		else
		temp = temp->left;
	} else if (n == temp->val) {
		break;
	} else {
		if (temp->right == NULL)
		break;
		else
		temp = temp->right;
	}
	}

	return temp;
}

// inserts the given value to tree
void insert(int n) {
	Node *newNode = new Node(n);
	if (root == NULL) {
	newNode->color = BLACK;
	root = newNode;
	} else {
	Node *temp = search(n);

	if (temp->val == n) {
		return;
	}
	newNode->parent = temp;

	if (n < temp->val)
		temp->left = newNode;
	else
		temp->right = newNode;

	// fix red red voilaton if exists
	fixRedRed(newNode);
	}
}

// utility function that deletes the node with given value
void deleteByVal(int n) {
	if (root == NULL)
	// Tree is empty
	return;

	Node *v = search(n), *u;

	if (v->val != n) {
	cout << "No node found to delete with value:" << n << endl;
	return;
	}

	deleteNode(v);
}

// prints inorder traversal  of the tree
void printInorder() {
	cout << "Inorder: " << endl;
	if (root == NULL)
	cout << "Tree is empty" << endl;
	else
	inorder(root);
	cout << endl;
}

};
int main() {
    RBTree tree;

    tree.insert(8);
    tree.insert(2);
    tree.insert(18);
    tree.insert(17);
    tree.insert(22);
    tree.insert(28);
    tree.insert(11);
    tree.insert(26);
    tree.insert(29);
    tree.insert(6);
    tree.insert(13);

    tree.printInorder();

    cout<<endl<<"After deleting the nodes 6, 11, 13, 17, 22"<<endl;

    tree.deleteByVal(6);
    tree.deleteByVal(11);
    tree.deleteByVal(13);
    tree.deleteByVal(17);
    tree.deleteByVal(22);

    tree.printInorder();
    return 0;
}
