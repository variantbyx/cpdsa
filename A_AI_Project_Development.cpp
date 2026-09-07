#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    ll n, x, y, z;
    cin >> n >> x >> y >> z;

    ll noai = (n + x + y - 1) / (x + y);

    ll onlyMaxi;

    if (x * z >= n)
    {
        onlyMaxi = (n + x - 1) / x;
    }
    else
    {
        ll remLines = n - x * z;
        ll extra = (remLines + x + 10 * y - 1) / (x + 10 * y);
        onlyMaxi = z + extra;
    }

    cout << min(noai, onlyMaxi) << "\n";
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