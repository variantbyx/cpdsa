#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<vector<ll>> dp;
ll knapsack(vector<ll> &wt, vector<ll> &val, ll w, ll n)
{
    if (n == 0 || w == 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n - 1] <= w)
    {
        return dp[n][w] = max(
                   val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1),
                   knapsack(wt, val, w, n - 1));
    }

    return dp[n][w] = knapsack(wt, val, w, n - 1);
}

void solve()
{
    ll n, w;
    cin >> n >> w;

    ll N = n;

    vector<ll> wt, val;

    dp.assign(n + 1, vector<ll>(w + 1, -1));

    while (n--)
    {
        ll wi, vi;
        cin >> wi >> vi;

        wt.push_back(wi);
        val.push_back(vi);
    }

    ll ans = knapsack(wt, val, w, N);

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}