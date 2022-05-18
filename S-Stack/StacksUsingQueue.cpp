// IMPLEMENTATION OF STACKS USING QUEUESS

/**
THERE ARE TWO WAYS TO DO IT:
-> MAIKING POP OPERATION SIMPLE PUSH EXPENSIVE
-> MAKING PUSH OPERATION SIMPLE AND POP EXPENSIVE
**/

#include<iostream>
#include<queue>
using namespace std;


class Stack1{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
	Stack1(){
		N=0;
	}
    //push expensive
    void push(int x){
        q2.push(x);
        N++;

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    //pop easy
    void pop(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return ;
        }
        q1.pop();
        N--;
    }

    int top(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return q1.front();       
    }

    int size(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else
            return N;
    } 
};

//push easy, pop expensive
class Stack2{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
	Stack2(){
		N=0;
	}
    //push easy
    void push(int x){
        q1.push(x);
        N++;
    }

	//pop expensive
    void pop(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return ;
        }
        
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;    
    }

    int top(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();

        q2.push(q1.front());
        q1.pop();

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return val;
    }

    int size(){
        if(q1.empty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else
            return N;
    }
};

//Driver Program
int main(){
    Stack1 s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    
    while(s1.size() > 0){    
    	cout << s1.top() << " ";
    	s1.pop();
    }

    Stack2 s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    while(s2.size() > 0){    
    	cout << s2.top() << " ";
    	s2.pop();
    }

}
