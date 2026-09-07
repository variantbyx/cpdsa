#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<ll> &a, ll h, ll x)
{
    ll w = 0;
    for (ll v : a)
    {
        if (v < h)
        {
            w += (h - v);
            if (w > x)
                return false;
        }
    }
    return true;
}

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
        mx = max(mx, a[i]);

    ll l = 1, h = mx + x, ans = 1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (check(a, mid, x))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
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