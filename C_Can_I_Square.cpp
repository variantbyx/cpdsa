#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }

    ll sq = sqrtl(sum);

    if (sq * sq == sum)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}