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
// Function will find the middle element of the linked list
int middle(node* temp_head){
    node* slow = temp_head, *fast = temp_head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
    int no_of_nodes;     
    cout<<"Enter the number of nodes in the linked list\n";
    cin>>no_of_nodes;
    node* ll = nullptr;    //creating head node and setting to null
    //creating the linked list
    cout<<"Enter the values in the linked list\n";
    while(no_of_nodes--){
        int val;
        cin>>val;
        create(&ll, val);
    }
    cout<<"The middle element of the linked list is: "<<middle(ll);
return 0;
}