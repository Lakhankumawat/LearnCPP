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

// function to take user input of linked list
node* addToList(node *head){
    bool quit = false;
    int temp;
    node *current = new node(-1);

    while (!quit){
        cin >> temp;
        if (temp == -1){
            quit = true;
        }
        else{
            current->data = temp;
            current -> next = current;
        }
    }
    return current;
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
    cout << "Enter the linked list items:"<<endl;
    head = addToList(head);

    bool detect = detectCycle(head);
    if(detect){
        cout<<"Cycle is present in linked list."<<endl;
    }else{
        cout<<"Cycle is not present in linked list."<<endl;
    }
    return 0;
}
