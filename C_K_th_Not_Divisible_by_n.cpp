#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll mid, ll n, ll k)
{
    return (mid - mid / n) >= k;
}

ll bs(ll n, ll k)
{
    ll l = 1, r = 2e18, ans = r;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, n, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll ans = bs(n, k);
        cout << ans << "\n";
    }
    return 0;
}