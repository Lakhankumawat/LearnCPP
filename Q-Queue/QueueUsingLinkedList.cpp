#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next; 
};
struct node *front=NULL;
struct node *rear=NULL;

void Insert(){int item;
struct node *newNode;
newNode= (struct node *)malloc(sizeof(struct node));
cout<<"Insert item in the queue"<<endl;
cin>>item;
newNode ->data=item;
newNode ->next=NULL;
if((front==NULL) && (rear==NULL))
{
    front = rear = newNode;
    return;
}
rear->next=newNode;
rear= newNode;

}}


void Delete(){
    struct node *temp=front;
    if(front==NULL)
    {cout<<"Queue Underflow"<<endl;
        return;}
    if(front==rear)
    {cout<<"Item deleted from queue is : "<<front->data<<endl;

        front= rear= NULL;
    }
    else{cout<<"Item deleted from queue is : "<<front->data<<endl;
        front= front->next;
    }
    free(temp);

}

void Display(){
    struct node *temp=front;
 if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }

cout<<"Items present in the queue are: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    int choice;
    cout<<"1. Insert an item to queue"<<endl;
    cout<<"2. Delete an item from queue"<<endl;
    cout<<"3. Display all items of queue"<<endl;
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
