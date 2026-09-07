#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll mid, ll n, ll k)
{
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        cnt += min(n, mid / i);
    }

    return cnt >= k;
}

ll bs(ll n)
{
    ll k = (n * n) / 2 + 1;
    ll l = 1;
    ll r = n * n;
    ll ans = r;

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

    ll n;
    cin >> n;

    // vector<ll> nums;

    // for (ll i = 1; i <= n; i++)
    // {
    //     for (ll j = 1; j <= n; j++)
    //     {
    //         nums.push_back(i * j);
    //     }
    // }

    // sort(nums.begin(), nums.end());

    ll ans = bs(n);
    cout << ans << "\n";
    return 0;
}