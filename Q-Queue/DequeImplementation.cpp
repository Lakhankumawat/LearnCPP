#include<iostream>
using namespace std;

#define SIZE 10
class dequeue {
   int a[20],f,r;
public:
    dequeue() {
        f=-1;
        r=-1;
    }
   
    //inserts element at the front if the deque is not full
    void insert_at_beg(int i) {
        if(f==-1) {
            f=0;
            a[++r]=i;
        } 
        else if(f!=0) {
            a[--f]=i;
            cout<<"\n inserted element is:"<<i;
        } 
        else {
        cout<<"\n insertion is not possible, overflow!!!";
        }
    }
    //inserts element at the rear if the deque is not full
    void insert_at_end(int i){
        if(r>=SIZE-1) {
            cout<<"\n insertion is not possible, overflow!!!!";
        } 
        else {
            if(f==-1) {
                f++;
                r++;
            } 
            else {
                r=r+1;
            }
            a[r]=i;
        }
    }
    // deletes element from the front if the deque is not empty
    void delete_fr_front(){
       if(f==-1) {
            cout<<"deletion is not possible::dequeue is empty";
            return;
        }
        else {
            if(f==r) {
                f=r=-1;
                return;
            } 
            else
                f=f+1;
        }
    }
    // deletes element from the end if the deque is not empty
    void delete_fr_rear(){        
        if(f==-1) {
            cout<<"deletion is not possible::dequeue is empty";
            return;
        }
        else {
            if(f==r) {
                f=r=-1;
            } else
                r=r-1;
        }
    }
    //prints deque if it is not empty
    void show(){
        if(f==-1) {
            cout<<"Dequeue is empty";
        } 
        else {
            for(int i=f;i<=r;i++) {
                cout<<a[i]<<" ";
            }
            cout << endl;
        }
    }
};

//Driver program 
int main() {
    int i;
    dequeue d;
    //adds element at the front
    cout<<"enter the element to be inserted at beginning ";
    cin>>i;
    d.insert_at_beg(i);
    //adds element at the back
    cout<<"enter the element to be inserted at end";
    cin>>i;
    d.insert_at_end(i);
    //prints deque  
    cout<<"deque is : ";
    d.show();
    //deletes from the front
    cout<<"deletion from front"<<endl;
    d.delete_fr_front();
    //prints deque  
    cout<<"deque is : ";
    d.show();
    //deletes from the back
    cout<<"deletion from rear"<<endl;
    d.delete_fr_rear();
    //prints deque (2 elements added and 2 deleted thus deque should be empty)
    cout<<"deque is : ";
    d.show();
}
