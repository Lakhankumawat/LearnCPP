 /*                                  SORT A STACK
    Time Complexity : O(n*log n)
    Space Complexity : O(n) which is the stack space     */
 

#include <bits/stdc++.h>
using namespace std;

// Declared a class
class SortStack                
{
    public:   stack<int> st;
	          void sort();
};

void show(stack<int> st)
{   
    cout<<"Sorted order of Stack : ";
    while (!st.empty())
    {
        cout<<" "<<st.top();
       	st.pop();
    }
    cout<<endl;
}

int main()
{
    int t;
    cout<<"Enter the no. of testcases : ";
    cin>>t;
    
    while(t--)
    {
    	SortStack *x = new SortStack();
    	int n;
    	cout<<"Enter the no. of elements in stack : ";
    	cin>>n;
    	cout<<"Enter the elements......\n";
	       for(int i=0;i<n;i++)
           {
	           int k;
	           cin>>k;
	           x->st.push(k);  //push elements into stack
    	   }
	              x->sort();   //call sort function
            	  show(x->st);
    }
}



void SortStack :: sort()
{
   priority_queue<int,vector<int>,greater<int>>pq;  // declaring min heap
 
    while(!st.empty())    // run the loop till the stack is not empty
    {
      pq.push(st.top());
      st.pop();
    }
    
    while(!pq.empty())    // run the loop till the min heap is not empty
    {
      st.push(pq.top());
       pq.pop();
    }
}