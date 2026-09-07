#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll maxi = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        if (i % 2 != 0)
            arr[i] = maxi;
    }

    ll cnt = 0;
    for (int i = 1; i < n; i += 2)
    {
        ll a = arr[i - 1] - arr[i];
        if (a >= 0)
        {
            cnt += a + 1;
            arr[i - 1] -= (a + 1);
        }
        if (i + 1 < n)
        {
            ll b = arr[i + 1] - arr[i];
            if (b >= 0)
            {
                cnt += b + 1;
                arr[i + 1] -= b + 1;
            }
        }
    }

    cout << cnt << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}