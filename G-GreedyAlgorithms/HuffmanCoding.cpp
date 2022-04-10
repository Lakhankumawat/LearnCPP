//--------HUFFMAN CODING----------//

#include <bits/stdc++.h>

using namespace std;

// creating a minheap node for huffman tree
struct Node{
    char data;
    unsigned fq;
    Node *left , *right;
    Node(char data,unsigned fq){
        left =right =NULL;
        this->data = data;
        this->fq =fq;
    }
};

// compareing two huffman tree nodes
struct CompareNode{
    bool operator()(Node*left,Node*right){
        return (left->fq>right->fq);
    }
};

//display huffman coding
void display(struct Node* root , string s){
    if(!root)
     return;
    if(root->data!='$')
     cout<< root->data<<" : "<<s<<endl;
    display(root->left, s+"0");
    display(root->right, s+"1");
}

//building a huffman tree
void huffmancode(char data[], int fq[], int size){
    struct Node *left ,*right ,*parent;
    // creating a minheap consist of each unique character
    priority_queue<Node* , vector<Node*>, CompareNode> minheap;
    
    for(int i=0; i<size; i++){
        minheap.push(new Node(data[i],fq[i]));
    }

    while(minheap.size() !=1){
        //extract two minimum frequency from minheap
        left = minheap.top();
        minheap.pop();
        right = minheap.top();
        minheap.pop();
        //create a new node with frequency of sum of two minimum node , '$' sign is used for non used nodes
        parent = new Node('$', left->fq+right->fq);
        //assigning two minimum frtequency node as right and left nodes of trhe new node
        parent->left = left;
        parent->right = right;
        minheap.push(parent);
    }
    //calling display function to display huffman coding
    display(minheap.top(),""); 
}

//--------- main function --------//
int main()
{
    int symbols;
    /*char arr[] = {'a','b','c','d','e','f'};
    int fq[] = {7,11,15,16,21,34};
    f : 0
    c : 100
    d : 101
    a : 1100
    b : 1101
    e : 111 */
    cout<<"Enter the number of total symbols : ";
    cin>>symbols; //total files
    int *fq = new int(symbols);
    char *arr = new char(symbols);
    char a;
    for(int i=0 ,a='a';i<symbols && a<'a'+symbols;a++,i++){
        arr[i]=char(a);
        cout<<"Enter the file "<<char(a)<<" weight : ";
        cin>>fq[i];
    }
    huffmancode(arr,fq,symbols);
    
    return 0;
}
