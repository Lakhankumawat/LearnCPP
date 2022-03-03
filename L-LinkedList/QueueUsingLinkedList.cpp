//Implementing Queue using Linked List 
#include<iostream>
using namespace std;
 
struct Node{
    int data;
    Node * next;
};
 
class Queue{
    public:
    Node * front;
    Node * rear;
    Queue(){front=rear=NULL;}
 
        void insert(int n)
        {
            Node * temp=new Node;
            if(temp==NULL){
                cout<<"Overflow"<<endl;
                return;
            }
            temp->data=n;
            temp->next=NULL; 
            //First rear allocated
            if(front==NULL){
                front=rear=temp;
            }
            else{
                rear->next=temp;
                rear=temp;
            }
            cout<<"Inserted "<<n<<endl;
        }
        
        
        void deleteitem()
        {
            if (front==NULL){
                cout<<"underflow"<<endl;
                return;
            }
             
            cout<<"Deleted "<<front->data<<endl;
            if(front==rear)//if only one node is there
                front=rear=NULL;
            else
                front=front->next;
        }

        
        void display()
        {
            if(front==NULL){
                cout<<"Underflow"<<endl;
                return;
            }
            Node *temp=front;
            while(temp){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"\n";
        }
        
        ~Queue(){//Destructor to clean up
            while(front!=NULL)
            {
                Node *temp=front;
                front=front->next;
                delete temp;
            }
            rear=NULL;
        }
        
}; 

 
int main(){
    Queue Q;
    //For Testing purposes within the code, replace the call lines with a custom menu written in the description
    
    Q.insert(10);
    Q.insert(30);
    Q.insert(50);
    Q.display();
    Q.deleteitem();
    Q.display();
    Q.insert(7);
    Q.display();
    
     
    return 0;
}

 

