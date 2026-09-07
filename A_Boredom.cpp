#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> cnt(100001, 0), dp(100001, 0);

    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }

    dp[1] = cnt[1] * 1;

    for (int i = 2; i <= mx; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    }

    cout << dp[mx];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}