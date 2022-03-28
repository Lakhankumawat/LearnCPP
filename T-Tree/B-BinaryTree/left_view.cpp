#include<bits/stdc++.h>
using namespace std;
// tree node declaration
struct node
{
    int data;
    node *left;
    node *right;
    node *root;
};
// creating new node
node *create(int data)
{
    node *newnode;
    newnode=new node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
// completing the tree 
 struct node* tree(node* t, int v){
	 if (t == NULL)
        return create(v);

    if (v < t->data)
        t->left = tree(t->left, v);
    else
        t->right = tree(t->right, v);

    return t;
}
//LEFT VIEW
// example - 
  /*              50
                 /  \
                30   70
              /      / \ 
            20      60  80
            Left view of tree is tree seen from the left 
            left view of this tree would be - 50 30 20 
            so we basically want first element of each level so we will use
            level order traversal and print first node of each level
            */
void left_view(node *root)
{
    queue<node*>q;//queue for iterative level order
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        int c=1;//for printing only first node
        while(n--)//till size of queue
        {
        node *cur= q.front();//current node will be top of queue
        q.pop();
        if(c==1)
        cout<<cur->data<<" ";//first node of current level
        c++;
        if(cur->left)// if left exists
        q.push(cur->left);
        if(cur->right)// if right exists
        q.push(cur->right);

        }
      

    }

}
int main()
{
    node *root= new node;
    root=NULL;
    int n=0;
    cout<<"ENTER NUMBER OF NODES"<<endl;
    cin>>n;
    cout<<"ENTER NODES OF TREE WITH GIVEN ORDER \n ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
	{
	    root = tree(root, arr[i]);
	}
    cout<<"LEFT VIEW OF GIVEN TREE "<<endl;
   left_view(root);

}