#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll odds = (n + 1) / 2;

    if (k <= odds)
        cout << 2 * k - 1 << "\n";
    else
        cout << 2 * (k - odds) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}