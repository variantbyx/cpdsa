#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll t, h, u;
    cin >> t >> h >> u;
    ll ans = 0;
    ans += 3 * u + min(t, u);

    t -= min(t, u);
    ans += 3 * h + 2 * min(2 * h, t);
    t -= min(2 * h, t);
    if (t)
        ans += 2 * t + 1;
    cout << ans << "\n";
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