#include <stdio.h>
#include <stdlib.h>

struct Node{
	int *keys; //array of keys
    struct Node **Child; //child pointers
	int leaf; //whether a leaf or not
    int n; //no of keys
};

typedef struct Node node;

struct b_tree{
	int t;              //degree
	node *root;	//root node
};
 
typedef struct b_tree tree;

tree *create_tree(int x)                                    //To create the tree initialising root to NULL and the degree
{
	tree *p=(tree*)malloc(sizeof(tree));
    p->t=x;
	p->root=NULL;
	return p;
}

//Creat B tree 
node *create(tree* T)
{
	node *ptr;
	ptr=(node*)malloc(sizeof(node));      //Creat a node
    int t;
    t=T->t;
    ptr->Child=(node**)malloc((2*t)*sizeof(node*)); //Initialize child pointers
	ptr->keys=(int*)malloc((2*t-1)*sizeof(int));    //Initialize keys array
	ptr->n=0;                   //No of key =0
    ptr->leaf=1;                //Assume it to be a leaf
    return ptr;
}

//Split child Function
void btree_splitchild(int i,tree *T,node* x)
{
    int j,t;
	node *z, *y;
    z=create(T);
    t=T->t;                       //a new node which stores (t-1) keys
    y=x->Child[i];
    z->leaf=y->leaf;
	z->n=t-1;
    //Copy the (t-1) keys of y to z
	for(j=0;j<t-1;j++)
    {
		z->keys[j]=y->keys[j+t];
    }
    // Copy the last t children of y to z
	if(!y->leaf)
    {
		for(j=0;j<t;j++)
        {
			z->Child[j]=y->Child[j+t];
		}
	}
    //Decrease the number of keys in y
	y->n=t-1;
    //New space for new child
	for(j=x->n;j>=i+1;--j)
    {
		x->Child[j+1]=x->Child[j];
	}
    //Link new child
	x->Child[i+1]=z;
	for(j=x->n-1;j>=i;--j)
    {
		x->keys[j+1]=x->keys[j];
	}
    //Duplicate the middle key of y
	x->keys[i]=y->keys[t-1];
    //Increase no of keys
	x->n=x->n+1;
}

int search(int k,tree *T,node *x)     //Search a node
{
    int i = 0;
    //To get the first key greater than or equal to k
    while (i<x->n&&k>x->keys[i])
        i++;
    // If the key is equal to k
    if (i<=x->n&&x->keys[i]==k)
        return 1;
    // Key is not found and is a leaf node
    if (x->leaf)
        return 0;
    // Check other child child
    return search(k,T,x->Child[i]);
}

//To find minimum value
//We will traverse towards the leftest key because it is the minimum
int minimum(node *x)
{
	if(x==NULL)
    {
		printf("Empty tree\n");
	}
	else 
    if(x->leaf)
    return x->keys[0];
	else 
    {
		int k=minimum(x->Child[0]);
		return k;
	} 
	
}

//If the keys are not full for a perticular node
void btree_insert_nonfull(int k,tree *T,node *x)
{
    //Initialize index as index of rightmost element
	int i,t;
    i=x->n-1;
    t=T->t;
    // If it is a leaf
	if(x->leaf)
    {
		while(i>=0 && k<x->keys[i])
        {
			x->keys[i+1]=x->keys[i];
			i--;
		}
        // Insert the new key
		x->keys[i+1]=k;
		x->n=x->n+1;
		
	}
	else                                    //If this node is not leaf
    {
        // To get the child where the new key will be
		while(i>=0 && k<x->keys[i])
        {
			i--;
		}
		i++;
        // To check full
		if(x->Child[i]->n==2*t-1)
        {
            // Split it if full
			btree_splitchild(i,T,x);
            // After split, it is splitted in two. Check where new key will be
			if(k>x->keys[i])
            i++;
		}
		btree_insert_nonfull(k,T,x->Child[i]);
	}
}

node *insert(int k,tree *T)
{
	node *r=T->root;
	int t;
    t= T->t;
    //If root is null
    if(T->root==NULL)
    {
        node *p=create(T);
        T->root=p;
        T->root->keys[0]=k;
        T->root->n=1;
    }
	else
    {
        if(r->n==2*t-1)             //If root is full
        {
            //new node
            node *ptr;
            ptr=create(T);
            T->root=ptr;
            ptr->n=0;
            //old root as child of new root
            ptr->Child[0]=r;
            ptr->leaf=0;
            //Split the old root
            //move 1 key to the new root
            btree_splitchild(0,T,ptr);
            //Now insert the key into one of the node
            btree_insert_nonfull(k,T,ptr);
        }
        else 
        btree_insert_nonfull(k,T,r);         // If root is not full, call for root
    }		
    return T->root;
}

void traverse(node *x)
{
    //traverse through n key and first n children
    int i;
    for(i=0;i<x->n;i++)
    {
        // If this is not leaf, then traverse the subtree rooted with child C[i].
        if(x->leaf==0)
           traverse(x->Child[i]);
        printf("%d ",x->keys[i]);
    }
    // Print the subtree rooted with last child
    if(x->leaf == 0)
        traverse(x->Child[i]);
}

int main()
{
    int k,num,i,ele,tos,t;
    char ch,a,var;
    //degree of tree
    printf("Enter the minimum degree of the B-tree t: ");
    scanf("%d",&t);
    //create btree
    tree *T=create_tree(t);
    printf("Enter A or B: ");
    scanf(" %c",&ch);
    if(ch=='A')
    {
        for(i=100;i>0;i--)
        {
            T->root=insert(i,T);
        }
        printf("Inorder traversal is: ");
        traverse(T->root);
        printf("\nEnter an element to search ");
        scanf("%d",&tos);
        k=search(tos,T,T->root);
        if(k==1)
        {
            printf("Present \n ");
        }
        else
        {
            printf("Not present\n ");
        }
    }
    else if(ch=='B')
    {
        do{
            printf("Options\nI for insertion\nS for search\nM for finding minimum\nT for traversing the B-Tree\nE for exit:");
            scanf(" %c",&a);
            switch(a)
            {
                case 'I':
                        printf("Enter number of elements you want to enter: ");
                        scanf("%d",&num);
                        printf("Enter %d numbers to insert: ",num);
                        for(i=0;i<num;i++)
                        {
                            scanf("%d",&ele);
                            T->root=insert(ele,T);
                        }
                        break;
                case 'S':
                        printf("Enter an element to search ");
                        scanf("%d",&tos);
                        k=search(tos,T,T->root);
                        if(k==1)
                        {
                            printf("Present \n");
                        }
                        else
                        {
                            printf("Not present\n");
                        }
                        break;
                case 'M':
                        k=minimum(T->root);
                        printf("Minimum element is %d \n",k);
                        break;
                case 'T':
                        printf("Inorder traversal is: ");
                        traverse(T->root);
                        printf("\n");
                        break;
            }
        }while(a!='E');
    }
    else
    {
        printf("Invalid character!! ");
    }
}
