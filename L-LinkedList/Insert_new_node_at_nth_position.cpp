
// C++ Program --->

#include<iostream>
using namespace std;

// node class for linked list
class node{
    public:
    int data;
    node* next;

    //constructor which will assign the given value to node and set next pointer to null
    node(int key){
        data = key;
        next = nullptr;
    }
};

// Function will create a linked list, new nodes will be added at the end of the list
void create(node** head, int val){
    node* newnode = new node(val);
    node* ptr = *head;
    if(ptr == nullptr){
        *head = newnode;
    }
    else{
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

// Function will insert the node at nth position of the linked list
void insert(node* temp_head, int val, int n){
    node* newnode = new node(val);
    while(n--){     //loop will iterate to nth position
        if(temp_head->next == nullptr){
            cout<<"Can not insert! Less than n nodes are present\n";
            return;
        }
        temp_head = temp_head->next;
    }
    //inserting the node
    newnode->next = temp_head->next;
    temp_head->next = newnode;
}

// Function will display elements of the linked list
void display(node* temp_head){
    cout<<"Linked list: ";
    while (temp_head!=nullptr)
    {
        cout<<temp_head->data<<" ";
        temp_head = temp_head->next;
    }
    cout<<endl;
}


int main()
{
    /*n is the nth node at which insertion is to be performed
    & val is the value which will be assgned to the nodes */

    int no_of_nodes, n, val;     
    cout<<"Enter the number of nodes in the linked list\n";
    cin>>no_of_nodes;

    node* ll = nullptr;    //creating head node and setting to null

    //creating the linked list
    cout<<"Enter the values in the linked list\n";
    while(no_of_nodes--){
        cin>>val;
        create(&ll, val);
    }

    cout<<"Enter the value and number at which insertion is to be performed\n";
    cin>>val>>n;
    insert(ll, val, n-2);

    //displaying the elements
    display(ll);
return 0;
}
