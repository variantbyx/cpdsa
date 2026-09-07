#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> h(n);

    for (ll &x : h)
        cin >> x;

    ll sum = 0;

    for (int i = 0; i < k; i++)
        sum += h[i];

    ll minSum = sum;

    ll ans = 0;

    for (int i = k; i < n; i++)
    {
        sum += h[i];
        sum -= h[i - k];

        if (sum < minSum)
        {
            minSum = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}