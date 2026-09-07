#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x < y)
    {
        cout << "NO\n";
        return;
    }

    if (x % y == 0)
    {
        int a = x / y;
        if (x % a == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
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