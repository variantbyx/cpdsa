#include <bits/stdc++.h>
using namespace std;

// N-ary tree
// struct Node
// {
//     int val;
//     vector<Node *> children;
//     Node(int x) : val(x) {}
// };

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> ratPos(n);

    for (int i = 0; i < n; i++)
        cin >> ratPos[i];

    // no. of edges=no. of vertices-1

    int noEdg = n - 1;

    vector<vector<int>> adj(n + 1);

    while (noEdg--)
    {
        int x, y;
        cin >> x >> y;

        // build adj. list

        adj[x].push_back(y);
        adj[y].push_back(x); // undirected tree
    }

    // convert to rooted tree

    int ans = 0;

    function<void(int, int, int)> dfs = [&](int node, int parent, int cnt)
    {
        if (ratPos[node - 1])
            cnt++;
        else
            cnt = 0;

        if (cnt > m)
            return;

        bool isLeaf = true;
        for (auto &child : adj[node])
        {
            if (child == parent)
                continue;

            isLeaf = false;
            dfs(child, node, cnt);
        }

        if (isLeaf)
            ans++;
    };

    dfs(1, 0, 0);

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}