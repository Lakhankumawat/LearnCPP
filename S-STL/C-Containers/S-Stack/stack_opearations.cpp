#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // Basic Syntax -> stack<data_type> stack_name;
    stack<int> st;
    // push() function is used to add element at the top of the container
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4); // Container -> [4 | 3 | 2 | 1]


    // pop() function is used to remove the top element of the container
    st.pop(); // Container -> [ 3 | 2 | 1 ]

    
    // top() function is used to print the top or the last entered element of the Stack
    cout<<st.top()<<endl;
    // Output -> 3

    
    // size() function is used to check the size of the Stack
    cout<<st.size()<<endl;
    // Output -> 3 

    
    // empty() function is used to check if the container is empty or not
    if(st.empty() == true){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    // Output -> Not Empty


    // swap() function is used to swap the elements of two stacks, they must be of same data type but size may vary
    // Example
    stack<int> stack_one;
    stack<int> stack_two;
    // adding elements in both the containers
    stack_one.push(1); stack_one.push(2); stack_one.push(3); stack_one.push(4);
    // Size of stack_one -> 4

    stack_two.push(5); stack_two.push(6);
    // Size of stack_two -> 2

    stack_one.swap(stack_two);
    cout<<"Size of stack_one after swapping is: "<<stack_one.size()<<endl;
    // Output -> 2

    cout<<"Size of stack_two after swapping is: "<<stack_two.size()<<endl; 
    // Output ->  4


    // emplace() function in Stack is used to add elements at the top of the container same as push() 
    // push() copy the value of the paramenter passed
    // whereas  emplace() creates an object and place the parameter at that place
    // push() moves the parameter to a location and emplace() creates a location for a parameter
    stack<int> stack_three;
    stack_three.emplace(10);
    stack_three.emplace(11);
    stack_three.emplace(12);

    while(stack_three.empty() == false){
        cout<<stack_three.top()<<" ";
        stack_three.pop();
    }
    // Output -> 12 11 10

    

}