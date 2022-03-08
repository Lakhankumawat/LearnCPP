// *******************************  Maximum Non Overlapping Interval *******************************
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// steps:
// 1) Sort Interval in bases of their ending time because we have to find maximum non overlapping interval.
// 2) then, traverse from first and remove those interval which is overlapping and subtract from the total number of intervals.
// 3) at the end, whatever we have in count it is our ans.


// Comparator to sort array in bases of their ending time.
bool cmp(pair<int, int> &a, pair<int, int> &b)
{ 
    return a.second < b.second;
}
// Traverse the sorted array and find answer. 
int findinterval(vector<pair<int, int>> interval, int no)
{          
    int answer = 1;
    sort(interval.begin(), interval.end(), cmp);
    int endtime = interval[0].second;
    cout << interval[1].first;
    for (int i = 1; i < no; i++)
    {
        if (interval[i].first >= endtime)
        {
            endtime = interval[i].second;
            answer++;
        }
    }
    return answer;
}
int main()
{
    int no;
    cout << "Enter The Number of total interval :- ";
    cin >> no; 
    cout << endl;
    vector<pair<int, int>> interval(no);
    for (int i = 0; i < no; i++)
    {
        cout << "Enter start Time of " << i + 1 << "th Meeting"
             << " :- ";
        cin >> interval[i].first;
        cout << "Enter end Time of " << i + 1 << "th Meeting"
             << " :- ";
        cin >> interval[i].second;
    }
    int maxnonoverlapping = findinterval(interval, no);
    cout << "maximum Non Overlapping Interval is :- " << maxnonoverlapping << endl;
}