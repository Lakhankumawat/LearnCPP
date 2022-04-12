#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left, *right;
    int data;
    bool left_thread;
    bool right_thread;
};
// Insert a Node in Binary Threaded Tree
struct Node *insert(struct Node *root, int key)
{
    Node *ptr = root;
    Node *par = NULL;
    while (ptr != NULL)
    {

        if (key == (ptr->data))
        {
            printf("Duplicate Key !\n");
            return root;
        }

        par = ptr;
        if (key < ptr->data)
        {
            if (ptr->left_thread == false)
                ptr = ptr->left;
            else
                break;
        }

        else
        {
            if (ptr->right_thread == false)
                ptr = ptr->right;
            else
                break;
        }
    }

    // Create a new Node
    Node *tmp = new Node;
    tmp->data = key;
    tmp->left_thread = true;
    tmp->right_thread = true;

    if (par == NULL)
    {
        root = tmp;
        tmp->left = NULL;
        tmp->right = NULL;
    }
    else if (key < (par->data))
    {
        tmp->left = par->left;
        tmp->right = par;
        par->left_thread = false;
        par->left = tmp;
    }
    else
    {
        tmp->left = par;
        tmp->right = par->right;
        par->right_thread = false;
        par->right = tmp;
    }

    return root;
}
//finds inorder successor
struct Node *inorderSuccessor(struct Node *ptr)
{

    if (ptr->right_thread == true)
        return ptr->right;
    ptr = ptr->right;
    while (ptr->left_thread == false)
        ptr = ptr->left;
    return ptr;
}
//inorder traversal
void inorder(struct Node *root)
{
    if (root == NULL)
        printf("Tree is empty");

    struct Node *ptr = root;
    while (ptr->left_thread == false)
        ptr = ptr->left;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = inorderSuccessor(ptr);
    }
}
//finds inorder predeccessor
struct Node *inPred(struct Node *ptr)
{
    if (ptr->left_thread == true)
        return ptr->left;

    ptr = ptr->left;
    while (ptr->right_thread == false)
        ptr = ptr->right;
    return ptr;
}

struct Node *caseA(struct Node *root, struct Node *par,
                   struct Node *ptr)
{
    // If Node to be deleted is root
    if (par == NULL)
        root = NULL;

    // If Node to be deleted is left
    // of its parent
    else if (ptr == par->left)
    {
        par->left_thread = true;
        par->left = ptr->left;
    }
    else
    {
        par->right_thread = true;
        par->right = ptr->right;
    }

    // Free memory and return new root
    free(ptr);
    return root;
}

struct Node *caseB(struct Node *root, struct Node *par,
                   struct Node *ptr)
{
    struct Node *child;

    // Initialize child Node to be deleted has
    // left child.
    if (ptr->left_thread == false)
        child = ptr->left;

    // Node to be deleted has right child.
    else
        child = ptr->right;

    // Node to be deleted is root Node.
    if (par == NULL)
        root = child;

    // Node is left child of its parent.
    else if (ptr == par->left)
        par->left = child;
    else
        par->right = child;

    // Find successor and predecessor
    Node *s = inorderSuccessor(ptr);
    Node *p = inPred(ptr);

    // If ptr has left subtree.
    if (ptr->left_thread == false)
        p->right = s;

    // If ptr has right subtree.
    else
    {
        if (ptr->right_thread == false)
            s->left = p;
    }

    free(ptr);
    return root;
}

struct Node *caseC(struct Node *root, struct Node *par,
                   struct Node *ptr)
{

    struct Node *parsucc = ptr;
    struct Node *succ = ptr->right;

    while (succ->left_thread == false)
    {
        parsucc = succ;
        succ = succ->left;
    }

    ptr->data = succ->data;

    if (succ->left_thread == true && succ->right_thread == true)
        root = caseA(root, parsucc, succ);
    else
        root = caseB(root, parsucc, succ);

    return root;
}
struct Node *delThreadedBST(struct Node *root, int dkey)
{

    struct Node *par = NULL, *ptr = root;

    int found = 0;

    while (ptr != NULL)
    {
        if (dkey == ptr->data)
        {
            found = 1;
            break;
        }
        par = ptr;
        if (dkey < ptr->data)
        {
            if (ptr->left_thread == false)
                ptr = ptr->left;
            else
                break;
        }
        else
        {
            if (ptr->right_thread == false)
                ptr = ptr->right;
            else
                break;
        }
    }

    if (found == 0)
        printf("dkey not present in tree\n");

    // Two Children
    else if (ptr->left_thread == false && ptr->right_thread == false)
        root = caseC(root, par, ptr);

    // Only Left Child
    else if (ptr->left_thread == false)
        root = caseB(root, par, ptr);

    // Only Right Child
    else if (ptr->right_thread == false)
        root = caseB(root, par, ptr);

    // No child
    else
        root = caseA(root, par, ptr);

    return root;
}

// Main Program
int main()
{
    int n, item;
    char ch;
    struct Node *root = NULL;
start:
    cout << "Enter operation to perform\n";
    cout << "1:Inserton\n2:Deletion\n3:Traversal";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter the element to insert:=";
        cin >> item;
        root = insert(root, item);
        break;
    case 2:
        cout << "Enter element to delete::=";
        cin >> item;
        root = delThreadedBST(root, item);
        break;
    case 3:
        inorder(root);
        break;

    default:
        cout << "enter correct value";
    }
    cout << "Enter Y to continue and N to exit-";
    cin >> ch;
    if (ch == 'Y')
        goto start;

    return 0;
}
