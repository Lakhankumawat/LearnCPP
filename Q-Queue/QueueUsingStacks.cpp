// IMPLEMENTATION OF QUEUE USING TWO STACKS

#include<iostream>
#include<stack>
using namespace std;


class queue{
    stack<int> s1;
    stack<int> s2;
public:
    //SIMPLY PUSH THE ELEMENT IN STACK1
    void enqueue(int x){
        s1.push(x);
    }

    int dequeue(){
        if(s1.empty() && s2.empty()){
            cout << "Error" << endl;
            exit(0);
        }
        //REVERESE STACK1 BY USING STACK2
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        //THEN SIMPLY POPPING THE FIRST ELEMENT OF STACK2, i.e. THE LAST ELEMENT OF STACK1
        int topval = s2.top();
        s2.pop();

        return topval;
    }

    // RETURNS TRUE IF BOTH STACKS ARE EMPTY
    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        else
            return false;
    }
};

/*
DRIVER PROGRAM

Queue q :
     1 | 2 | 3 | 4

*/
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue not empty" << endl;
    return 0;
}