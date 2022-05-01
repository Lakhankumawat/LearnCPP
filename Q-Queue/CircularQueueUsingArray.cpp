#include <iostream>
using namespace std;
int n=50, front=-1, rear=-1;
int queue[50];
void Insert(){
int item;
cout<<"Enter the item to insert: "<<endl;
    cin>>item;
    if(front== (rear+1)% n)                   //Condition of Circular Queue Overflow
    {cout<<"Circular Queue Overflow"<<endl;} 
    else if(front==-1 && rear==-1)
    {front=rear=0;
queue[rear]=item;
    }
    else{
        rear=(rear+1)% n;
        queue[rear]=item;
    }
}
void Delete(){ if(front==-1 && rear==-1){cout<<"Circular Queue Underflow"<<endl;}    //Condition of Circular Queue Underflow
  else if(front==rear){
      cout<<"Item deleted from Circular queue is : "<< queue[front]<<endl;
  front=rear=-1;
  }
  else{ cout<<"Item deleted from Circular queue is : "<< queue[front]<<endl;
front=(front+1)%n;
      
  }
    
}

void Display(){int i;
if(front==-1 && rear==-1)
  {cout<<"Circular Queue is empty"<<endl;} 
    else
    {
        cout<<"The Circular Queue is :"<<endl;
        for (i=front; i!=rear;i= (i+1)%50)
            cout<<queue[i]<<" ";
    cout<<queue[i]<<endl;
  }
    
}




int main(){
    int choice;
    cout<<"1. Insert an item to Circular queue"<<endl;
    cout<<"2. Delete an item from Circular queue"<<endl;
    cout<<"3. Display all items of Circular queue"<<endl;
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