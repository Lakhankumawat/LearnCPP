#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    //this will work with any type of vector  
    vector<int> numbers = {0,1,2,3,4,5,6,7};
    vector<int> reverseOrder; // a temp vector

    //show original vector
    cout << "Original Vector: ";
    for(auto i: numbers){
        cout << i << " ";
    }
    cout << endl;
    
    //there are two solutions
    
    //solution (1)
    for(int i=numbers.size() - 1; i>=0; --i)
    {
        //this will take the last element and append it to the new one
        //effectively reversing the order of the elements.
        reverseOrder.push_back(numbers[i]);
    }

    //show the results
    cout << "Reversed Vector first solution: ";
    for(auto i: reverseOrder){
        cout << i << " ";
    }
    cout << endl;

    //solution (2)
    //using the algorithm library
    reverse(numbers.begin(), numbers.end()); //directly reverse the order of the original vector
    
    //show the results
    cout << "Reversed Vector second solution: ";
    for(auto i: numbers){
        cout << i << " ";
    }
    cout << endl;
}
