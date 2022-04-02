// C++ program to reverse first k elements of a queue. 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to reverse the first K elements of the Queue */
void reverseQueueFirstKElements(int k, queue<int>& Queue) 
{ 
    if (Queue.empty() == true || k > Queue.size()) 
        return; 
    if (k <= 0) 
        return; 
  
    stack<int> Stack; 
  
    /* Push the first K elements into a Stack*/
    for (int j = 0; j < k; j++) { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
  
    /* Enqueue the contents of stack 
       at the back of the queue*/
    while (!Stack.empty()) { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
  
    /* Remove the remaining elements and  
       enqueue them at the end of the Queue*/
    for (int j = 0; j < Queue.size() - k; j++) { 
        Queue.push(Queue.front()); 
        Queue.pop(); 
    } 
} 
  
/* Utility Function to print the Queue */
void Print(queue<int>& Queue) 
{ 
    while (!Queue.empty()) { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
    } 
} 
  
// Driver code 
int main() 
{ 
    queue<int> Queue; 
    cout << "Given Queue : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " "; // Printing the initial elements in queue for reference
        Queue.push(i);
    }
    int k;
    cout<<"\nEnter value of k: ";
    cin>>k;
    reverseQueueFirstKElements(k, Queue); 
    cout << "\nQueue After Reversing: "<<endl;
    Print(Queue);
} 