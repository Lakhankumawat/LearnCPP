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
    /* 
    Let us create following Binary-Tree
              15
           /    \
          13       17
        /   \     /   \
      12     14  16    21
    */
    struct Node *root = NULL;
    root = create( 15 );
    root->left = create( 13 );
    root->left->left = create( 12 );
    root->left->right = create( 14 );
    root->right = create( 17 );
    root->right->left = create( 16 );
    root->right->right = create( 21 );
    
    cout << leaf_count( root ) << endl;
    
    return 0;
}