// Floyd's Algorithm or Hare and Tortoise Algorithm
#include <iostream>
using namespace std;

/* Linked list node */
class node {
    public:
        int data;
        node *next;

        node(int data) {
            this->data = data;
            next = NULL;
        }
};

// function to insert node at end of linked list
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// Function to make cycle in linked list
void makeCycle(node *head, int pos){
    node *temp = head;
    node *startNode;

    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

/* Returns true if there is a loop in linked list else returns false */
bool detectCycle(node* &head){
    node *slow = head;     
    node *fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;       // slow pointer would move by 1 step
        fast = fast->next->next; // fast pointer would move by 2 step

        if(fast == slow){    // Cycle present in linked list
            return true;
        }
    }
 
    return false;    // Cycle not present in linked list
}

int main(){
    node* head = NULL;
    // Linked list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head, 4);      

    bool detect = detectCycle(head);
    if(detect){
        cout<<"Cycle is present in linked list."<<endl;
    }else{
        cout<<"Cycle is not present in linked list."<<endl;
    }
    return 0;
}
