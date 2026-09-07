#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);

    for (auto &x : a)
        cin >> x;

    ll len = 1;
    bool possible = false;

    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])
        {
            len++;
            if (len >= m)
                possible = true;
        }
        else
            len = 1;
    }

    cout << (!possible ? "YES" : "NO") << "\n";
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