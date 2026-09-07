#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> pf(n + 1, 0);

    for (int i = 1; i <= n; i++)
        pf[i] = pf[i - 1] + arr[i - 1];

    ll ans = 0;
    for (int k = 1; k <= n; k++)
    {
        if (n % k != 0)
            continue;

        ll maxi = LLONG_MIN, mini = LLONG_MAX;

        for (int i = k; i <= n; i += k)
        {
            ll sum = pf[i] - pf[i - k];
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }

        ans = max(ans, maxi - mini);
    }

    cout << ans << "\n";
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