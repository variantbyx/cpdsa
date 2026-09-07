#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int r = max({a, b, c}) - min({a, b, c});

    int x1 = a + b;

    int r1 = max({a, b, x1}) - min({a, b, x1});

    int x2 = b + c;

    int r2 = max({b, c, x2}) - min({b, c, x2});

    int x3 = a + c;

    int r3 = max({a, c, x3}) - min({a, c, x3});

    cout << min({r, r1, r2, r3}) << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}