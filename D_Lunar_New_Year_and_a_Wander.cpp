#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> adj;

void solve()
{

    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, {});

    while (m--)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> vis(n + 1, 0);

    pq.push(1);
    vis[1] = 1;

    vector<int> ans;

    while (!pq.empty())
    {
        int u = pq.top();
        pq.pop();
        ans.push_back(u);

        for (auto &v : adj[u])
        {
            {
                if (!vis[v])
                    pq.push(v);
                vis[v] = 1;
            }
        }
    }

    for (int rs : ans)
        cout << rs << " ";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}