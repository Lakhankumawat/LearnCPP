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
cout<<"Insert item in the circular queue"<<endl;
cin>>item;
newNode ->data=item;
newNode ->next=NULL;
if((front==NULL) && (rear==NULL))
{
    front = rear = newNode;
    rear->next=front;
    return;
}
rear->next=newNode;
rear= newNode;
rear->next=front;

}



void Delete(){
    struct node *temp=front;
    if(front==NULL)
    {cout<<"Circular Queue Underflow"<<endl;
        return;}
    if(front==rear)
    {cout<<"Item deleted from circular queue is : "<<front->data<<endl;

        front= rear= NULL;
    }
    else{cout<<"Item deleted from circular queue is : "<<front->data<<endl;
        front= front->next;
        rear->next=front;
    }
    free(temp);

}

void Display(){
    struct node *temp=front;
 if ((front == NULL) && (rear == NULL)) {
      cout<<"Circular Queue is empty"<<endl;
      return;
   }

cout<<"Items present in the circular queue are: ";
    while(temp->next != front){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}


int main(){
    int choice;
    cout<<"1. Insert an item to circular queue"<<endl;
    cout<<"2. Delete an item from circular queue"<<endl;
    cout<<"3. Display all items of circular queue"<<endl;
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
