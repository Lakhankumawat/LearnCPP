#include <iostream>
#include <cstring>
using namespace std;

/*-------------------------------A template for tree node----------------------------------*/
typedef struct node{
    char data;
    struct node *left, *right, *next;    
}NODE;

/*------------------------------A head node for the stack's head--------------------------*/
NODE* head = NULL;


/*--------------------------A function for allocating new tree node-----------------------*/
NODE* newNode(char data){
    
    NODE* root = (NODE*) malloc(sizeof(NODE));
    
    root -> data = data;
    root -> right = NULL;
    root -> left = NULL;
    root -> next = NULL;
    
    return root;
}


/*--------------------------A push function for nodes into the stack---------------------*/
void push(NODE* x){
    
    if(head == NULL){
        head = x;
        return;
    }
    
    x -> next = head;
    head = x;
}


/*------------------------A pop function for remoing nodes from the stack-----------------*/
NODE* pop(){
    
    NODE* p = head;
    head = head -> next;
    
    return p;
}


/*----------------------A function to check the character is operator or not --------------*/
bool isOperator(char c){
    
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


/*-------------------A function for inorder traversal of the tree-------------------------*/
void inorder(NODE* root){
    
    if(root != NULL){
        
        if(!isOperator(root -> data))
            cout << root -> data;
        
        else{
            cout << "(";
            inorder(root -> left);
            cout << root -> data;
            inorder(root -> right);
            cout << ")";
        }
    }
}


/*----------------------A function for postorder traversal of the tree-------------------*/
void postorder(NODE* root){
    
    if(root != NULL){
        postorder(root -> left);
        postorder(root -> right);
        cout << root -> data;
    }
}


/*-------------------A function for preorder traversal pf the tree----------------------*/
void preorder(NODE* root){
    
    if(root != NULL){
        cout << root -> data;
        preorder(root -> left);
        preorder(root -> right);
    }
}


int main(){
    
    char s[50];
    cout << "Enter an expression (in postfix form) : ";
    gets(s);

    NODE *x, *y, *z;
    
    /*-------------A systematic way to construct a expression tree-----------------------*/

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            z = newNode(s[i]);
            x = pop();
            y = pop();
            z -> left = y;
            z -> right = x;
            push(z);
        }
        else{
            z = newNode(s[i]);
            push(z);
        }
    }


    /*----------------------Displaying all the forms--------------------------------*/

    cout << "\nThe given expression is : ";
    
    for(int i = 0; i < strlen(s); i++)
        cout << s[i];
    cout << endl;
    
    cout << "\nThe inorder traversal of expression : ";
    inorder(z);
    cout << endl;

    cout << "\nThe preorder trversal of expression : ";
    preorder(z);
    cout << endl;

    cout << "\nThe postorder traversal of expression : ";
    postorder(z);
    cout << endl;

    return 0;
}