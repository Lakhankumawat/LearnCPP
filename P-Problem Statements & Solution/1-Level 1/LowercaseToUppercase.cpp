// Question:- A string given lowercase and you have to convert it into upperase
// Input String only conatins lowercase alphabetical letters.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lowercase; // Declaring string
    cin>>lowercase; // taking input

    for(int i=0;i<lowercase.length();i++) // iteration for each character
    {
       lowercase[i]  =  lowercase[i] - 32; // For converting to Uppercase using ascii values
    }
    cout<<lowercase; // output by storing same 
}
// time complexity is O(n)
// space complexity is O(n)
//where n is length of string.

