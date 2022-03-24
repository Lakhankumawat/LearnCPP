#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    //input number of elements
    cin >> n;
    int array[n];
    //enter the elements
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }
    //input the element to search for
    int target;
    cin>>target;
    bool is_present = false;
    int left = 0,right=n-1,index=-1;

    while (right>=left){
        //calculate the index of mid
        int mid = (right+left)/2;
        //if the element at the mid is greater than our target search on the left part of the mid
        if(array[mid]>target){
            right = mid-1;
        }
            //if the element at the mid is smaller than our target search on the right part of the mid
        else if(array[mid]<target){
            left = mid+1;
        }
            /* else then the element at the mid is our target so update the bool is_present
               and the index of the target and search on the left part of the mid to find if
               there is any other occurrence of our target before that index */
        else{
            is_present = true;
            index = mid;
            right = mid-1;
        }
    }
    if(is_present){
        cout<<target<<" is present at index "<<index;
    }
    else{
        cout<<target<<" is not present";
    }

}