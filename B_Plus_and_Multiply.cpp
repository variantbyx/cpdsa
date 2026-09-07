#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (a == 1 || b == 1)
    {
        cout << "Yes\n";
        return;
    }

    while (n > 1)
    {
        if (n % a == 0)
        {
            n /= a;
        }
        else if (n >= b)
        {
            int times = max(1LL, (n - (n % a)) / b);
            n -= times * b;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
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