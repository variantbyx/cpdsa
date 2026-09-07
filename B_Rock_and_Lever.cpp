#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll msb(ll n)
{
    if (n == 0)
        return 0;
    ll msb = 0;
    n = n >> 1;
    while (n != 0)
    {
        n = n >> 1;
        msb++;
    }
    return (1LL << msb);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    ll c = 0;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[msb(a[i])]++;
    }
    for (auto y : m)
    {
        ll x = y.second;
        c += (x * (x - 1)) / 2;
    }
    cout << c << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}