#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int value;
    struct Node *left, *right;
    struct Node *root;
    
};

struct Node *create ( int val )
{

    struct Node *p = new Node;
    p->value = val;
    p->left = p->right = NULL;
    p->root = NULL;
    return p;
}

struct Node* tree(Node* t, int v){
	 if (t == NULL)
        return create(v);

    if (v < t->value)
        t->left = tree(t->left, v);
    else
        t->right = tree(t->right, v);

    return t;
}

///------------Number of leaf nodes in the binary tree------------///
int leaf_count( struct Node* p )  
{  
    if ( p == NULL )      
        return 0;  
    if ( p->left == NULL && p->right == NULL )  
        return 1;         
    else
        return leaf_count( p->left ) + leaf_count( p->right );  
} 



// Driver functions
int main()
{
	int size;
	Node *root = new Node;
	root = NULL;

	cout<<"Enter the size of array : ";
	cin>>size;

    int a[size];
    
	cout<<"Enter the elements in array : ";
	for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
	for(int i = 0; i < size; i++)
	{
	    root = tree(root, a[i]);
	}
    
    cout << "\n No. of leaf nodes in tree: "<<leaf_count( root ) << endl;
    
    return 0;
}