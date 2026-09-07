#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int buy, sell, cnt;
};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> names(n);

    vector<vector<Item>> p(n, vector<Item>(m));

    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j].buy;
            cin >> p[i][j].sell;
            cin >> p[i][j].cnt;
        }
    }

    int ans = 0;

    for (int buyp = 0; buyp < n; buyp++)
    {
        for (int sellp = 0; sellp < n; sellp++)
        {
            if (buyp == sellp)
                continue;

            vector<int> dp(k + 1, 0);

            for (int it = 0; it < m; it++)
            {
                int cst = p[sellp][it].sell - p[buyp][it].buy;
                int cnt = p[buyp][it].cnt;

                if (cst <= 0)
                    continue;
                for (int c = 0; c < cnt; c++)
                {
                    for (int cap = k; cap >= 1; cap--)
                    {
                        dp[cap] = max(dp[cap], dp[cap - 1] + cst);
                    }
                }
            }
            ans = max(ans, dp[k]);
        }
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