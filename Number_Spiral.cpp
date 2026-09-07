#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    ll x, y;

    cin >> x >> y;

    ll ans;
    if (x <= y)
    {
        if (y % 2 == 0)
        {
            ans = (y - 1) * (y - 1) + x;
        }
        else
        {
            ans = y * y - x + 1;
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            ans = x * x - y + 1;
        }
        else
        {
            ans = (x - 1) * (x - 1) + y;
        }
    }

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