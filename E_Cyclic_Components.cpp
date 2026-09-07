#include <bits/stdc++.h>
using namespace std;

#define int long long

void dfs(vector<vector<int>> &adj, vector<int> &compo, vector<int> &vis, int u)
{
    vis[u] = 1;

    compo.push_back(u);

    for (auto &v : adj[u])
    {
        if (!vis[v])
        {
            dfs(adj, compo, vis, v);
        }
    }
}

void solve()
{

    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n + 1);

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // ;
    vector<int> vis(n + 1, 0);

    // dfs(adj, compo, vis, 1);

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<int> compo;

            dfs(adj, compo, vis, i);

            bool isCyle = true;

            for (int c : compo)
            {
                if (adj[c].size() != 2)
                {
                    isCyle = false;
                    break;
                }
            }

            if (isCyle)
                ans++;
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}