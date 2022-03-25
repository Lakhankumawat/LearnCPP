//auther: amal mohamed.

//  Code for number of sets with maximum bitwise OR.
#include <bits/stdc++.h>
using namespace std;
 
// Compute  or of all elements
// in array of size s.
int OR(int data[], int s)
{
    int mOR = 0;
    for (int i = 0; i < sz; ++i) {
        mOR |= data[i];
    }
 
    return mOR;
}
 
// calculate the size of
// minimum subset with maximum or
int minSubset(int data[], int s, int maxOR)
{
    
    vector<vector<int> > count(s + 1, vector<int>(maxOR + 1, 1e9));
   
    count[0][0] = 0;
 
    for (int i = 0; i < s; i++) {
        for (int j = 0; j <= maxOR; j++) {
            
            count[i + 1][j] = min(count[i + 1][j], count[i][j]);
            
            if (count[i][j] != 1e9) {
                count[i + 1][j | data[i]] = min(
                    count[i + 1][j | data[i]], count[i][j] + 1);
            }
        }
    }
 
    return count[s][maxOR];
}
 

int main()
{
    int data[] = { 5, 1, 3, 4, 2 };
    int sz = sizeof(data) / sizeof(0);
    int maxOR = OR(data, sz);
 
    // Function Call
    cout << minSubset(data, s, maxOR) << '\n';
}