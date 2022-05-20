#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next; 
     struct node *prev; 
};
struct node *head=NULL;

void Insert(){int item;
struct node *newNode;
newNode= (struct node *)malloc(sizeof(struct node));
cout<<"Insert item in the beginning"<<endl;
cin>>item;
newNode ->data=item;
newNode ->next=NULL;
newNode ->prev=NULL;
if((head==NULL)
{
    head = newNode;
    return;
}
newNode->next=head;
head=newNode;

}}


void Delete(){
    struct node *temp=head;
    if(head==NULL)
    {cout<<"List is empty"<<endl;
    }else
{cout<<"Item deleted from list in the beginning is : "<<temp->data<<endl;
head=temp->next;
temp->next ->prev= NULL;
    }
    free(temp);

}

void Display(){
    struct node *temp=head;
 if (head==NULL) {
      cout<<"List is empty"<<endl;
      return;
   }

cout<<"Items present in the list are: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    int choice;
    cout<<"1. Insert an item"<<endl;
    cout<<"2. Delete an item"<<endl;
    cout<<"3. Display all items"<<endl;
    cout<<"4. Exit"<<endl;
    do{cout<<"Enter choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1: Insert();
        break;
         case 2: Delete();
        break;
         case 3: Display();
        break;
         case 4: cout<<"Exit"<<endl;
        break;
        default:cout<<"Enter valid choice"<<endl;
    }

    }while(choice!=4);
    return 0;
}
