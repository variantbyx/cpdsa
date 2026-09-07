#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    if (sum == 0)
    {
        cout << "YES\n";
        return;
    }

    while (sum != 0)
    {
        ll sum = 0;
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = -a[i - 1];
            a[i] = -a[i];
        }

        sum = accumulate(a.begin(), a.end(), 0LL);
    }

    if (sum == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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