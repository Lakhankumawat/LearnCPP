#include<iostream>
#include<deque>
using namespace std;

// Function to print the elements of the Container
void display(deque<int> queue_name){
    for(int i:queue_name)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    deque<int> deque_one;
    // push_front() is used to add element at the front of the container
    deque_one.push_front(3); deque_one.push_front(2); deque_one.push_front(1);

    //push_back() is used to add element at the end of the container
    deque_one.push_back(4); deque_one.push_back(5); deque_one.push_back(6);
    display(deque_one); // Output -> 1 2 3 4 5 6 


    // pop_front() is used to delete element from the front of the container
    deque_one.pop_front();
    display(deque_one); // Output -> 2 3 4 5 6

    // pop_back() is used to delete element from the end of the container
    deque_one.pop_back();
    display(deque_one); // Output -> 2 3 4 5


    // emplace_front() is used to add element at the start of the container without making copy of the argument passed
    deque_one.emplace_front(1);
    // emplace_back() is used to add element at the end of the container without making copy of the argument passed
    deque_one.emplace_back(6);
    display(deque_one); // Output -> 1 2 3 4 5 6


    //empty() function is used to check if the conatiner is empty or not
    if(deque_one.empty() == true){
        cout<<"Container is empty"<<endl;
    }
    else{
        cout<<"Container is not empty"<<endl;
    }
    // Output -> Container is not empty


    // size() function is used to find the number of elements in the container
    cout<<deque_one.size()<<endl;
    // Output -> 6


    // at() function is used to find the value of the element at the position passed as the parameter
    cout<<"Value of the element at position 3 is: "<<deque_one.at(3)<<endl;
    // Output -> 4 (indexing start with 0)

    // Other operation in Deque are
    // clear() -> delete all the elements of the container
    // begin() -> moves the iterator at the begining of the container
    // end() -> moves the iterator at the end of the container
    //  max_size() -> returns the maximum numner of element a container can hold
    // resize() -> used to change the size of the container


    return 0;
}