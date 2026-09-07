#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{

    int a, b;
    cin >> a >> b;

    if (a <= 2 * b && b <= 2 * a && (a + b) % 3 == 0)
    {
        cout << "YES\n";
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