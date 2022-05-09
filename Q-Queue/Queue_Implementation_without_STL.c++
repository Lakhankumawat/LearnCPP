// Time complexity : O(1) .
// Space complexity : O(1). 
#include<iostream>
#define size 10
using namespace std;

class Queue{            
    
    
    int list[size];
    public:
    int front , rear ;
    Queue()
    {
        //this->size=size;
        
        front = -1;
        rear=-1;
    }

    bool isEmpty()   // function to check whether the Queue is empty or not.
    {
        if (front == -1)
          return true;
        else
            return false;  
    }

    bool isFull()    // function to check whether the Queue is Full or not.
    {
        if(rear==size-1 && front ==0)
                return true;
        else
             return false;
    }

    void Display() // function to display the elements in the Queue in proper order. 
    {
        if(isEmpty())
           cout<<"Queue is empty"<<endl;
        else{
            cout<<"front-> ";
        for(int i=front;i<=rear;i++)
        {
            cout<<list[i]<<" ";
        }
        cout<<"<-rear"<<endl;
        }
    }

    void enQueue(int item)  // function to add the elements in the Queue . 
    {
        if(isFull())
          cout<<"Queue is Full";
        else
        {
            if(front == -1) 
              front = 0;
            rear = rear + 1;
            list[rear] = item;

        }
    }

    void deQueue()  // function to delete the elements in the Queue . 
    {
        if(isEmpty())
         cout<<"Queue is Empty.";
        else{
            if( front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else 
              front = front + 1;
            
            cout<<"element deleted successfully"<<endl;
        }
    }

     



};
int main(){
    Queue q1 = Queue();
    char cont;
    do{
    cout<<"\n-----Queue Operation-----"<<endl<<"1. EnQueue\n2. DeQueue 3. Display the Queue\nChoose:";
    int input;
    cin>>input;
    
    switch (input)
    {
    case 1:
        int temp;
        cout<<"Enter the Number for input:";
        cin>>temp;
        q1.enQueue(temp);  // adding user input to Queue.
        break;
    case 2:
        q1.deQueue();   // deleting the front element from the Queue.
        break;
    case 3:
        q1.Display(); // displaying the Queue.
        break;
    default:
        cout<<"invalid input";
        break;
    }
    
    cout<<"Do you want to continue ? type y for yes.";
    cin>>cont;
    }while(cont = 'y');


}
