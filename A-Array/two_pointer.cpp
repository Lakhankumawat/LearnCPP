#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<cmath>
using namespace std;
// Author: Saeed Taha Mohamed
// Program Name: Two Pointers, find two numbers of a given sum.
// Last Modification: 25/03/2022
// Version 1.0

int main()
{
    // we initilize to variables and
    int n,i=0,j=1;
    int arr[6] = {1,2,3,4,5,6};
    cin>>n;
    // we make sure that i and j are smaller than array size

    while(i < 5 &&j<6){
        // if two array numbers matches, we print the numbers and break the loop else we increment
        if(arr[j] +arr[i] == n){
            cout<<"The numbers are"<<endl;
            cout<<arr[j]<<" and "<<arr[i]<<endl;
            break;
        }else{
            j++;
        }
        // if j reaches 6, we increment i and reset j and make it head of i by 1
        if(j == 6){
            i++;
            j = i + 1;
        }
    }
    // if no two numbers inside the array matches the given sum then we print no numbers much
    if(i == 5 && j==6){
        cout<<"No Numbers Much"<<endl;
    }
    system("pause");
    return 0;
}
