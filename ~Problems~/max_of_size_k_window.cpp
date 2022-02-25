// GFG : https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

// Approach
// here in order to find maximum in window of size K we ll push indexes of elements in deque.
// if any element in back of deque is smaller than current element that ll be poped out till we get either empty deque ot element graeter than current element.
// then we ll push_back current element index .
// side-by-side we ll keep track of window size .

#include<bits/stdc++.h>
using namespace std;


vector<int>max_of_size_k(vector<int>arr, int k ){
    // initializing deque 
    deque<int>q;
    // push indexes of first k elements in deque
    for(int i=0;i<k;i++){
        // since we want to find maximum so we should pop all elements that are smaller than or equal to current element . So that our maximum element of window of size k lies int he front of deque.
        while(q.size()>0 && arr[q.back()]<=arr[i]){
            q.pop_back();
        }
        // Remember Indexes are pushed in deque.
        q.push_back(i);
    }
    // answer vector
    vector<int>ans;
    
    
    // now for remaining elements 
    for(int j=k;j<arr.size();j++){
    // now after pushing _back  k elements in decreasing order of arr we have got maximum of window size k to the front of deque 

        ans.push_back(arr[q.front()]); 
        // same as we did above 
        while(q.size()>0 && arr[q.back()]<=arr[i]){
            q.pop_back();
        }
        // side-by-side we need to  keep track of window size so if our current index i.e. j minus front index in deque is greater than or equal to k we need to pop that from front so that our cuurent window size in deque always remains k

        while(q.size()>0 && (j-q.front())>=k){
            q.pop_front();
        }
        // now push current index in deque
        q.push_back(j);
    }
    // for last window of size k we need to consider separately
    ans.push_back(arr[q.front()]);
    return ans;

}

int main(){
    int num_of_elements;
    cout<<"enter Number of elements: ";
    cin>>num_of_elements;
    vector<int>v;
    cout<<"enter elements :";
    for(int i=0;i<num_of_elements;i++){
        int input;
        cin>>input;
        v.push_back(input);
    }
    int window_size;
    cout<<"enter window_size: ";
    cin>>window_size;
    vector<int>max_in_window_of_size_k=max_of_size_k(v,window_size);
    for(auto x:max_in_window_of_size_k){
        cout<<x<<" ";
    }
    

}

// input :
// arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
// maximum of 1 ,2 ,3 is 3       deque contains : 3
// maximum of 2 ,3 ,1 is 3        deque contains : 3 1
// maximum of 3 ,1 ,4 is 4         deque contains : 4
// maximum of 1 ,4 ,5 is 5          deque contains: 5
// maximum of 4 ,5 ,2 is 5           deque contains: 5 2
// maximum of 5 ,2 ,3 is 5            deque contains: 5 3
// maximum of 2 ,3 ,6 is 6             deque contains: 6

// Output: 3 3 4 5 5 5 6

// time complexity O(n)
// space complexity O(k)
