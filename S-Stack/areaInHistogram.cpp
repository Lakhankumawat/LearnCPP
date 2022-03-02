

//------------------------------------PROBLEM :Largest Rectangular Area in a Histogram ----------------------------------
//------------------------------------ Solved using stacks ----------------------------------

// Time complexity of solution - O(n)
// Space complexity of solution - O(n)

#include <bits/stdc++.h>
using namespace std;

int MAH(vector<int> arr)
{
    int n = arr.size();
    stack<pair<int, int>> s;
    int leftest = -1;
    int rightest = n;

    // finding nearest smaller right
    vector<int> right;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            right.push_back(rightest);
        }
        else if (!s.empty() && s.top().first < arr[i])
        {
            right.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                right.push_back(rightest);
            }
            else
            {
                right.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(right.begin(), right.end());

    // finding nearest smaller left
    stack<pair<int, int>> s1;
    vector<int> left;

    for (int i = 0; i < n; i++)
    {
        if (s1.empty())
        {
            left.push_back(leftest);
        }
        else if (!s1.empty() && s1.top().first < arr[i])
        {
            left.push_back(s1.top().second);
        }
        else if (!s1.empty() && s1.top().first >= arr[i])
        {
            while (!s1.empty() && s1.top().first >= arr[i])
            {
                s1.pop();
            }
            if (s1.empty())
            {
                left.push_back(leftest);
            }
            else
            {
                left.push_back(s1.top().second);
            }
        }
        s1.push({arr[i], i});
    }

    // we got left and right array
    vector<int> width(n);
    int area = 0;

    for (int i = 0; i < n; i++)
    {
        width[i] = right[i] - left[i] - 1;
        int temp = arr[i] * width[i];
        area = max(area, temp);
    }

    return area;
}


int main()
{
    
    vector<int> arr{6, 2, 5, 4, 5, 1, 6};
    cout << MAH(arr);
}