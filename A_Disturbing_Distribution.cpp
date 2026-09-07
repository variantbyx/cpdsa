#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 676767677;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;

    for (ll x : a)
        if (x > 1)
            ans += x;

    if (a.back() == 1)
        ans++;

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