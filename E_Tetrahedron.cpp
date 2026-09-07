#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

vector<vector<int>> dp;

int solve(int node, int s)
{
    if (s == 0)
    {
        return node == 3;
    }

    int ans = 0;

    if (dp[s][node] != -1)
        return dp[s][node];

    for (int nxt = 0; nxt < 4; nxt++)
    {
        if (nxt == node)
            continue;

        ans = (ans + solve(nxt, s - 1)) % mod;
    }
    return dp[s][node] = ans % mod;
}

int findWays(int n)
{
    dp.assign(n + 1, vector<int>(4, -1));

    return solve(3, n);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << findWays(n) << "\n";
    return 0;
}