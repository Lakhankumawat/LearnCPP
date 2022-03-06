#include<iostream>
#include<queue>
using namespace std;

// Function to print the elements of the Queue Container
void displayContainer(queue<int> queue_name)
{
    while(queue_name.empty() == false)
    {
        cout<<queue_name.front()<<" ";
        queue_name.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> queue_one;

    // push() function is used to add elements at the end of the container
    queue_one.push(1);
    queue_one.push(2);
    queue_one.push(3);
    queue_one.push(4);
    queue_one.push(5);
    // Calling the function to print the elements
    displayContainer(queue_one); // Output -> 1 2 3 4 5 


    // pop() function is used to delete the element from the front of the container
    queue_one.pop();
    displayContainer(queue_one); 
    // Output -> 2 3 4 5


    // front() function is used to display the first element in the queue
    cout<<queue_one.front()<<endl;
    // Output -> 2


    // back() function is used to display the last element of the queue
    cout<<queue_one.back()<<endl;
    // Output -> 5


    // size() function is to display the size of the container
    cout<<queue_one.size()<<endl;
    // Output -> 4 


    // emplace() function is used to add new element at the end of the container same as push()
    // push() insert the copy of the value passed as the parameter in the queue
    // where as emplace() inster the object without making copy of the value passed as the parameter
    queue_one.emplace(6);
    displayContainer(queue_one);
    // Output -> 2 3 4 5 6


    return 0;
}