#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    ll n; cin >> n;

    vector<ll> a(n);

    for (auto &it : a)cin >> it;

    ll i = 1, j1 = (ll)4e18, j2 = (ll)4e18;

    for (int k = 0; k + 1 < n; k++)
    {
        ll x = a[k + 1] - a[k];

        if (x >= 0)j1 = max(j1, min(j2, x));

        else
        {
            ll req = -x;
            i = max(i, req);
            j2 = j1;
            j1 = i - 1;
        }
    }

    if (j1 >= i || j2 >= i)
        cout << "YES\n";
    else
        cout << "NO\n";
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