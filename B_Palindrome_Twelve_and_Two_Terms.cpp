#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalin(ll x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve()
{
    ll n;
    cin >> n;

    for (ll i = 0; i <= n; i += 12)
    {
        ll div12 = i;

        ll palin = n - div12;

        if (palin >= 0 && isPalin(palin))
        {
            cout << palin << " " << div12 << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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