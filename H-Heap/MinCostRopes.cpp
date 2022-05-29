/*                           Minimum Cost Of Ropes
Time Complexity : O(n log n)
Space Complexity : O(n) , since we are using priority queue for storing data.   */

#include <bits/stdc++.h>
using namespace std;

//Function to return the minimum cost of connecting the ropes.
long long cost(long long arr[], long long n) 
{
   priority_queue<long long,vector<long long>,greater<long long>>pq(arr,arr+n);
   //declared min heap so that elements should be stored in ascending order
        long long cost = 0;
        
               while(pq.size()>1)   //till heap is not empty, run this loop
               {
                  long long first = pq.top();
                    pq.pop();
                 long long second = pq.top();
                    pq.pop();
                 // take out first two minimum elements from priority queue and add them   
                  cost = cost+first+second;
                  
                  pq.push(first+second);  // push the final result in priority queue
               }
       return cost;
   }
           

int main() 
{
    long long n,i,a[100001];
    cout<<"Enter the no. of elements in array : ";
    cin >> n;
    cout<<"Enter the elements.....\n";
        
        for (i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        cout<<"\n";
        
      cout<<"Minimum cost for connecting ropes : "<<cost(a,n);
    
    return 0;
}