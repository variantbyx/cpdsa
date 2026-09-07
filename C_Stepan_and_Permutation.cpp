#include <bits/stdc++.h>
using namespace std;

#define int long long

class DSU
{
public:
    vector<int> parent, rank;

    DSU(int n)
    {
        parent.resize(n + 1);
        rank.assign(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY)
            return;

        if (rank[rootX] > rank[rootY])
            parent[rootY] = rootX;

        else if (rank[rootX] < rank[rootY])
            parent[rootX] = rootY;

        else
        {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> p(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i + 1];
    }

    DSU dsu(n);

    for (int i = 1; i + x <= n; i++)
    {
        dsu.Union(i, i + x);
    }

    for (int i = 1; i + y <= n; i++)
    {
        dsu.Union(i, i + y);
    }

    for (int i = 1; i <= n; i++)
    {
        if (dsu.find(i) != dsu.find(p[i]))
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}