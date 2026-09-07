#include <bits/stdc++.h>
using namespace std;

int n;

vector<int> subtreeSize;

vector<vector<int>> adj;

void dfs(int node, int parent)
{
    subtreeSize[node] = 1;

    for (int child : adj[node])
    {
        if (child == parent)
            continue;

        dfs(child, node);

        subtreeSize[node] += subtreeSize[child];
    }
}

void solve()
{
    cin >> n;

    if (n % 2)
    {
        cout << -1 << "\n";
        return;
    }

    subtreeSize.assign(n + 1, 0);
    adj.assign(n + 1, vector<int>());

    int edg = n - 1;

    while (edg--)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    int ans = 0;

    for (int i = 2; i <= n; i++)
    {
        if (subtreeSize[i] % 2 == 0)
            ans++;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}