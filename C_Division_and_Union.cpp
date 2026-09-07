#include <bits/stdc++.h>
using namespace std;

bool allOne(vector<int> &x)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != 1)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<int> vis(n);

    vector<vector<int>> rs;

    rs.push_back(v[0]);

    vis[0] = 1;

    for (int i = 1; i < rs.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rs[i - 1][0] >= v[i][0] && rs[i - 1][1] >= v[i][1])
            {
                vis[i] = 1;
            }
            else
            {
                vis[i] = 2;
            }
        }
    }

    if (allOne(vis))
    {
        cout << -1 << "\n";
        return;
    }

    for (int x : vis)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}