/* Given a linked list, check weather the linked list is palindrome or not
*/

#include<iostream>
#include<stack>
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
//Function will check weather the list is palindrome or not
bool isPalindrome(node* temp_head) {
        //finding middle element of the list
        node* slow = temp_head, *fast= temp_head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = temp_head;
        stack<int> s;   //creating a stack
        //Pushing all the elements after the middle node into the stack
        while(slow){
            s.push(slow->data);
            slow = slow->next;
        }
        int c = s.size();   //Size of the stack
        //Comparing the elements 
        while(c--){
            if(fast->data != s.top())    return false;
            s.pop();
            fast = fast->next;
        }
        return true;
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
    if(isPalindrome(ll))    cout<<"The given linked list is palindrome\n";
    else    cout<<"The given linked list is not a palindrome\n";
return 0;
}
