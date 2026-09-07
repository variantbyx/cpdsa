#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<ll> &d, vector<ll> &c, ll T, ll h)
{
    __int128 damage = 0;

    for (ll i = 0; i < d.size(); i++)
    {
        damage += (__int128)d[i] * (((T - 1) / c[i]) + 1);

        if (damage >= h)
            return true;
    }

    return false;
}

ll bsa(vector<ll> &d, vector<ll> &c, ll h, ll n)
{
    ll l = 1, r = 1e18;

    ll ans = r;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(d, c, mid, h))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

void solve()
{
    ll h, n;
    cin >> h >> n;

    vector<ll> d(n), c(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    ll ans = bsa(d, c, h, n);

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}