
//For Theory Refer : https://www.geeksforgeeks.org/topological-sorting-indegree-based-solution/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void TopologicalBfs(vector<int> adj[], int N)
    {

        vector<int> inDegree(N, 0);

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < adj[i].size(); j++)
            {
                inDegree[adj[i][j]]++;
            }
        }

        queue<int> q;

        for (int i = 0; i < N; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            cout << cur << " ";
            for (int i = 0; i < adj[cur].size(); i++)
            {
                inDegree[adj[cur][i]]--;
                if (inDegree[adj[cur][i]] == 0)
                {
                    q.push(adj[cur][i]);
                }
            }
        }
    }
};
// Driver program to test above function
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        obj.TopologicalBfs(adj, N);
        cout << endl;
    }

    return 0;
}
