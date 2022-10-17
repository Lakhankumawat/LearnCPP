/* 
 PROBLEM   STATEMENT: 

You are given an array a of n integers. Find the number of pairs (i,j) (1≤i<j≤n) where the sum of ai+aj is greater than or equal to l and less than or equal to r (that is, l≤ai+aj≤r).

For example, if n=3, a=[5,1,2], l=4 and r=7, then two pairs are suitable:

i=1 and j=2 (4≤5+1≤7);
i=1 and j=3 (4≤5+2≤7).
*/

/*NOTE:  

Policy based data structures in g++
Difficulty Level : Medium
Last Updated : 15 Jan, 2018
The g++ compiler also supports some data structures that are not part of the C++ standard library. Such structures are called policy-based data structures. These data structures are designed for high-performance, flexibility, semantic safety, and conformance to the corresponding containers in std.

To use these structures, the following lines must be added to the code:

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

*/

#include<bits/stdc++.h>
using namespace std;
 
//common file for PBDS(Policy based data structure, here we use orderedset)
#include<ext/pb_ds/assoc_container.hpp>
// including tree_order_statistics_node_update
#include<ext/pb_ds/tree_policy.hpp>
//namespace
using namespace __gnu_pbds;
#define int long long

//macro definition
#define ordered_set tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
 
#define ld long double
#define endl "\n"
const int mod=1000000007;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
 
const int bit=31;

signed main(){
    int t=1;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        ordered_set st;
        
        int ans=0;
        int tim=0;
        
        for(int i=n-1;i>=0;i--){
            //number of elements strictly less than l-arr[i]
            int lo=st.order_of_key({l-arr[i],-1});
            
            //number of elements strictly less than r-arr[i]
            int hi=st.order_of_key({r-arr[i],INT_MAX});
            st.insert({arr[i],tim++});
            ans+=(hi-lo);
        }
        cout<<ans<<endl;
    }
    return 0;
}
