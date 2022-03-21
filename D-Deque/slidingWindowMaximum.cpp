#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    deque<int> Dq;
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7}, sol;
    int k = 3;

    for (int i = 0; i < arr.size(); i++)
    {
        if (!Dq.empty() && Dq.front() == i - k)
            Dq.pop_front();

        while (!Dq.empty() && arr[Dq.back()] < arr[i])
        {
            Dq.pop_back();
        }
        Dq.push_back(i);

        if (i > k - 2)
            sol.push_back(arr[Dq.front()]);
    }

    for (auto &i : sol)
        cout << i << " ";

    return 0;
}