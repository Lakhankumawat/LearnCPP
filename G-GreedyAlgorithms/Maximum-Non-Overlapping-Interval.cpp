// GDB CODE LINK Compile and Execute : https://onlinegdb.com/rknD8SBeO

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
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