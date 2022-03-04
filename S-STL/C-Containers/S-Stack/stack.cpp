#include<iostream> 
#include<stack> // Include stack library to use it and it's functions
using namespace std;

int main()
{
    // Basic Syntax
    stack<int> st; // stack<data_type> stack_name;

    
    // push() function is used to insert the element at the top of the container
    st.push(1); 
    st.push(2);
    st.push(3); 
    st.push(4);
    st.push(5);
    // Container -> [ 5| 4 | 3 | 2 | 1 ]

    
    // pop() functio is used to remove the top or the last added element from the container
    st.pop(); // This will remove 5 from the stack
    // Container -> [ 4 | 3| 2 | 1]


    // Check this by printing all the elements using Loop.
    while (st.empty() == false) // empty() function is used to check stack is empty or not
    {
        cout<<st.top()<<" "; // top() function is used to print the top element of the stack
        st.pop();
    }
    // Output -> 4 3 2 1 

    // Stacks operation are mentioned in "stacks_opearations.cpp" file
    

    return 0;
}