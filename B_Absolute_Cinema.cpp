#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (n == 1)
    {
        cout << a[0] + b[0] << "\n";
        return;
    }

    vector<ll> fromA;

    ll bSum = 0;
    for (int i = 0; i < n; i++)
    {
        ll maxi = max(a[i], b[i]);
        fromA.push_back(min(a[i], b[i]));
        bSum += maxi;
    }
    ll maxi2 = 0;
    if (!fromA.empty())
        maxi2 = *max_element(fromA.begin(), fromA.end());

    cout << bSum + maxi2 << "\n";
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