#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll n)
{
    for (ll k = 1; k <= n; k++)
    {
        ll total = (k * k) * (k * k - 1) / 2;
        ll attack = 4 * (k - 1) * (k - 2);

        cout << total - attack << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    solve(n);

    return 0;
}