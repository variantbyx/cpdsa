#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll cx = (x + k - 1) / k, cy = (y + k - 1) / k;

    if (cx > cy)
        cout << 2 * cx - 1 << "\n";
    else
        cout << 2 * cy << "\n";
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