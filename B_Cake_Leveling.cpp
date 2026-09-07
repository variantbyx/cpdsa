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

    ll pf = 0, mini = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        pf += a[i];
        mini = min(mini, pf / (i + 1));
        cout << mini << (i == n - 1 ? '\n' : ' ');
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