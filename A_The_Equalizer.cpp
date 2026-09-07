#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll sum = 0;

    for (ll &x : a)
    {
        cin >> x;
        sum += x;
    }

    ll spMoves = n * k;

    if (sum % 2 == 1 || spMoves % 2 == 0)
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
}