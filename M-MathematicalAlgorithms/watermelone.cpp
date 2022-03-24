#include <iostream>

using namespace std;

int main()
{
    int weight;
    cout << "Enter the weight of the watermelon: ";
    cin >> weight;
    if (weight%2 == 0){
    cout << "Yes the boys can divide the watermelon into two parts";
    }
    else {
    cout << "No the boys can't divide the watermelon into two parts";

    }

    return 0;
}
