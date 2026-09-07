#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        if (sum < 1LL * i * (i + 1) / 2)
        {
            cout << "NO\n";

            // consume remaining input
            while (i < n)
            {
                cin >> x;
                i++;
            }
            return;
        }
    }

    cout << "YES\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}