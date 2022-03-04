/* 

---------------------Problem description----------------------

Given the head of the linkd list, insert a new node at nth position in the linked list.
If n is greater than the number of nodes in the linked list the print the message "Can not insert! Less than n nodes are present".

Input format-
        First line will contain no_of_node (number of nodes in the linked list)
        Then n lines will contain values of linked list
        Then value of node to be inserted and position

Example test cases:
    1>
    Input:
       Line 1- 6
       Line 2- 1, 2, 3, 4, 5, 6,
       Line 3- 33, 4

    Output: 1 2 3 33 4 5 6


Examle-1
        Given number of nodes 6, then create a linked list with 5 nodes 
        Let the linked list created is 1->2->3->4->5->6->NULL
        Now as value of n(position where the node will be inserted) and value is given
        Insert the node at given position
        Let n is given as 4 and val is given as 33
        Then the given linked list becomes 1->2->3->33->4->5->6->NULL
        Hence the node is inserted at given position successfully.



        If the n(position of insertion) is greater than the number of nodes in the linked list,
        then program will display the message "Can not insert! Less than n nodes are present" and in next line Linked list will be displayed.

*/



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
