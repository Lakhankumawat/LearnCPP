///--------Linked List with Header Node-------///
# include<iostream>
#include<cstdlib>

using namespace std;

//linked list node
class Node
{
    public:
    int info;
    Node *link;
};

//Declaring all the functions
void create_list(Node* head);
void addatend(Node*head,int data);
void display(Node*head);
void addbefore(Node* head,int data,int prev_data);
void addatpos(Node*head,int data,int pos);
void del(Node*head,int data);
void reverse(Node*head);

int main(){

    int choice ,data,node_data,pos;
    Node* head = new Node();  //allocate node
    head->info =0; // put any data in header that you want to put
    head->link =NULL;//Header node is pointing to null
    create_list(head);
    while(1){
        cout<<"\nEnter your choice : \n1 : For Display\n2 : For Adding element at the end\n3 : For Adding element at a postion\n4 : For Deleting a element \n5 : For Reverse\n6 : For Add before a node\n7 : For Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            display(head);
            break;

            case 2:
            cout<<"Enter the element to insert : "<<endl;
            cin>>data;
            addatend(head,data);
            break;

            case 3:
            cout<<"Enter the element to insert : "<<endl;
            cin>>data;
            cout<<"Enter the position at which you want to insert "<<data<<" : "<<endl;
            cin>>pos;
            addatpos(head,data,pos);
            break;

            case 4:
            cout<<"Enter the element to be deleted : "<<endl;
            cin>>data;
            del(head,data);
            break;

            case 5:
            reverse(head);
            break;

            case 6:
            cout<<"Enter the element to insert : "<<endl;
            cin>>data;
            cout<<"Enter the element before which "<<data<<" to be insert : "<<endl;
            cin>>node_data;
            addbefore(head,data,node_data);
            break;

            case 7:
            exit(1);

            default:
            cout<<"Please choose from the given choice\n";

        }
    }

    return 0;
}

//creating list by entering data
void create_list(Node* head){
    int i,n,data;
    cout<<"Enter the number of node to create : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the element to insert : "<<endl;
        cin>>data;
        addatend(head,data); //adding new node by calling addatend function
    }
}

void display(Node*node){
    if(node->link==NULL){
        cout<<"list is empty\n";
        return;
    }
    while(node->link!=NULL){
        node=node->link;
        cout<<node->info<<"\t";
        
    }
}

void addatend(Node*head,int data){  //adding node at the end
    Node* new_node=new Node();
    Node*p= head;
    new_node->info=data;
    while(p->link!=NULL)
       p=p->link;
    p->link=new_node;
    new_node->link=NULL;
    return;
}

void addbefore(Node* head,int data, int node_data){
    Node*p=head;
    while(p->link!=NULL){
        if(p->link->info==node_data){
        Node* new_node=new Node();
        new_node->info=data;
        new_node->link=p->link;
        p->link=new_node;
        return;
        }
        p =p->link;
    }
    cout<<"element "<<node_data<<" is not present in the list"<<endl;
}   

void addatpos(Node*head,int data,int pos){
     Node*p=head;
    for(int i=1;i<pos;i++){
        p =p->link;
        if(p==NULL){
            cout<<"List have less elements than "<<pos<<endl;
            return;
        }
    }
    Node* new_node=new Node();
    new_node->info=data;
    new_node->link=p->link;
    p->link=new_node;
}

void del(Node*head,int data){
    Node*p=head,*del_node;
    while(p->link!=NULL){
        if(p->link->info==data){
        del_node=p->link;
        p->link=del_node->link;
        free(del_node);
        return;
        }
        p =p->link;
    }
    cout<<"element "<<data<<" is not present in the list"<<endl;
} 

void reverse(Node*head){
    Node*prev,*ptr,*next;
    prev=NULL;
    ptr=head->link;
    while(ptr!=NULL){
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    head->link=prev;
}