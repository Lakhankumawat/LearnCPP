// BFS traversal in graph
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int v, e, adj[20][20], visited[21];

void addEdge(int l, int r)
{
    adj[l][r] = 1;
    adj[r][l] = 1;
}

void BFS(int start)
{

    for (int i = 1; i <= v; i++)
        visited[i] = 0;

    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < v; i++)
        {
            if (adj[node][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
int main()
{

    cout << "ENTER NO. OF VERTICES: ";
    cin >> v;
    cout << "Enter NO. OF EDGES: ";
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int l, r;
        cin >> l >> r;
        addEdge(l, r);
    }
    BFS(0);
    return 0;
}
