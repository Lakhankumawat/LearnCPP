#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> Dq;

    for (int i = 5; i >= 1; i--)
        Dq.push_front(i);

    for (int i = 6; i <= 10; i++)
        Dq.push_back(i);

    // After these two loops, our deque should look like: 1 2 3 4 5 6 7 8 9 10

    for (int i = 1; i <= 5; i++)
    {
        cout << Dq.front() << " ";
        Dq.pop_front();
    }

    cout << "\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << Dq.back() << " ";
        Dq.pop_back();
    }

    return 0;
}