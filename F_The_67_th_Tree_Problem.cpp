#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int n = x + y;

    int d = y - x;

    if (x > y)
        cout << "NO\n";

    if (x == 0)
    {
        if (y == 0 || y % 2 == 0)
        {
            cout << "NO\n";
        }
    }

    else
    {
        cout << "YES\n";

        long long mm = 2 * x + (d % 2);

        for (long long i = 2; i <= mm; i++)
        {
            cout << i - 1 << " " << i << "\n";
        }

        for (long long i = mm + 1; i <= n; i++)
        {
            cout << mm << " " << i << "\n";
        }
    }
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