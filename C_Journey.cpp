#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;

double dfs(int node, int parent)
{
    int childreen = 0;

    for (auto &v : adj[node])
    {
        if (v != parent)
            childreen++;
    }

    if (childreen == 0)
        return 0.0;

    double ans = 0.0;

    for (auto &v : adj[node])
    {
        if (v == parent)
            continue;
        ans += 1.0 + dfs(v, node);
    }

    return ans / childreen;
}

void solve()
{
    int n;
    cin >> n;

    int edge = n - 1;

    adj.resize(n + 1, {});

    while (edge--)
    {
        double u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    double ans = dfs(1, -1);

    cout << fixed << setprecision(15) << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}