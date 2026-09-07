#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int coinCombo(vector<int> &a, int n, int x)
{
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = (dp[i][j - a[i - 1]] + dp[i - 1][j]) % mod;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][x];
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = coinCombo(a, n, x);

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}