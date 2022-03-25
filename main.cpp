//Author: Rana Essam
//last edit: 25/3/2022
//description: This programm get the maximum number of n numbers

#include <iostream>
#include <vector>
using namespace std;

int main() {
int n, num, max;
vector <int> nums;

cout << "please, entre the number of numbers : ";
cin >> n;

for (int i = 0 ; i < n ; i++){
    cout << " please enter number[" << i+1 <<"]: "; // print i+1 to show the user the number of the rest inputs
    cin >> num;
    nums.push_back(num); //to store all the numbers in one vector so i can loop on them
}

max = nums[0]; //Assume the first number is the max

for(int i = 0 ; i < n ; i++){
        if (nums[i] > max){     //looping on all the number to get the max.
            max = nums[i];
        }
}
cout << "the maximum number is:  "<<max;
return 0;
}
