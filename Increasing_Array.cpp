#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll &x : a)
        cin >> x;

    ll cnt = 0;

    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {

            cnt += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }

        else
            continue;
    }

    cout << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}