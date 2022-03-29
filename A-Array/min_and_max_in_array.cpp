//min and max in array
//Time Complexity = O(n)

#include <iostream>
#include<climits>                    //include this header file
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxno=INT_MIN;
    int minno=INT_MAX;
    
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);       //put maximum of 2 in maxno
        minno=min(minno,arr[i]);       //put minimum of 2 in minno 
    }
           
        cout<<"MAX NO "<<maxno<<endl;
        cout<<"MIN NO "<<minno<<endl;
        
        
    
    return 0;
}
