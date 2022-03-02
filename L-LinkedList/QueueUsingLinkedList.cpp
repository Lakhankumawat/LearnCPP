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
  //For Testing purposes the code fragment below can be replaced by direct calls 
  //for example 'Q.insert(integer)' , 'Q.delete()' , 'Q.display';
    bool loop = true;
    while(loop==true){
        cout<<"\n1 Insert\n2 Delete\n3 Display\n4 Exit\n"<<endl;
        int op, insertion = 0,inputs, i=0;
        cin>>op;
        switch(op){
            case 1:
                cout<<"Enter the number of insertions followed by the inputs"<<endl;
                cin>>insertion;
                while(i<insertion){
                    cin>>inputs;
                    Q.insert(inputs);
                    i++;
                }
                break;
            case 2:
                Q.deleteitem();
                break;
            case 3:
                Q.display();
                break;
            case 4:
                loop=false;
                break;
            default:
                cout<<"Invalid Input"<<endl;
            
        }
    }
     
    return 0;
}

 




 
