#include <iostream>
#include <string>

using namespace std;
// this program is used to subtract to number.
int X;
// check if input is integer or string
void isNumeric(const string& num) {
    for (char i : num){
        if (isdigit(i) == false) {
            X = 0;
        }else{X=1;}
    }}
int main() {
    string num1,num2;
    float answer;
    // take the input from the user
    cout<<"The first digit = ";cin>>num1;cout<<endl;
    cout<<"The second digit = ";cin>>num2;cout<<endl;
    // call the function to check
    isNumeric(num1);
    isNumeric(num2);


    while ( X == 0) {
        // if input is not a number the loop to re-take the input
        cout<<"Invalid Input,Enter the numbers again and be sure your input is digits\n";
        cout<<"The first digit = ";cin>>num1;cout<<endl;
        cout<<"The second digit = ";cin>>num2;cout<<endl;
        isNumeric(num1);
        isNumeric(num2);
    }
    // convert number to string to use (-) operation
    int z = stoi(num1);
    int  a = stoi(num2);
    answer = z - a;
    cout << "The answer = " << answer;

    return 0;
}
// I take the input as a string to be able to check it.