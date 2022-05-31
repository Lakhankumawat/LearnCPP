#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//https://www.geeksforgeeks.org/buy-maximum-stocks-stocks-can-bought-th-day/ 

// Returning the maximum stocks
int buyMaxStocks(int n, int k, int prices[])
{
    vector<pair<int, int> > vec;
 
    // Now, Making pair of product cost and number of the day..
    for (int i = 0; i < n; ++i)
        vec.push_back(make_pair(prices[i], i + 1));   
 
    // Sort the vector pair.
    sort(vec.begin(), vec.end());   
 
    // Calculating the maximum number of stock count.
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += min(vec[i].second, k / vec[i].first);
        k -= vec[i].first * min(vec[i].second, (k / vec[i].first));
    }
 
    return result;
}
 
int main()
{
    int prices[100];
    int days;
    cout<<"Enter the number of days: ";
    cin>>days;
    for(int i=0; i<days; i++)
    {
        cin>>prices[i];
    }
    int money;
    cout<<"Enter the initial amount of money the customer has: ";
    cin>>money;
 
    cout << buyMaxStocks(days, money, prices) << endl;
    return 0;
}