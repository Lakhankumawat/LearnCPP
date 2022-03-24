#include<bits/stdc++.h>

using namespace std;

int main() {
    // Number of intervals
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        //Pushing a pair of two variables : y is the end of the interval and x is the beginning
        vec[i] = {y, x};
    }

    // Sorting the intervals in bases of their End time.
    sort(vec.begin(), vec.end());


    // determining the beginning the last interval we check and the counter
    int second = vec[0].first, cnt = 1;

    for (int i = 1; i < n; ++i) {

        /* if the interval has a beginning point which is less than the last point we have
           or has the same point for the beginning and the end which is equal to our last point
           then they overlap together, and we just skip it*/
        if (vec[i].second == vec[i].first || vec[i].second < second)continue;

        /* Otherwise, we have a new interval which doesn't overlap with our last one so we update the (second) variable
           and increase the counter by 1 */
        cnt++;
        second = vec[i].first;
    }
    cout << cnt << endl;
}