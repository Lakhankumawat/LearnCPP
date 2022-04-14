#include<iostream>
using namespace std;
int queue[50], n=50, front=0, rear=-1;
void Insert(){
    int item;
    if(rear== n-1)                        //Condition of Queue Overflow
    {cout<<"Queue Overflow"<<endl;}        
else{
    cout<<"Enter the item to insert: "<<endl;
    cin>>item;
    rear++;
    queue[rear]=item;
}}
void Delete(){
if((front==0 && rear==-1) || front==rear+1){          //Condition of Queue underflow
     cout<<"Queue Underflow ";
}
else{ cout<<"Item deleted from queue is : "<< queue[front]<<endl;
    front++;
}

}
void Display(){int i;
    if((front==0 && rear==-1) || front==rear+1)
     { cout<<"Queue is empty"<<endl; }
else{
      cout<<"Items of the queue are : ";
      for(i=front;i<=rear;i++)
      {cout<<queue[i]<<"  ";
      cout<<endl;}
}

}
int main(){
    int choice;
    cout<<"1. Insert an element to queue"<<endl;
    cout<<"2. Delete an element from queue"<<endl;
    cout<<"3. Display all elements of queue"<<endl;
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
}