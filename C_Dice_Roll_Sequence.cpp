#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> dp(7, 0);

    for (int x : a)
    {
        int bprv = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (i != x && i + x != 7)
                bprv = max(bprv, dp[i]);
        }
        dp[x] = max(dp[x], bprv + 1);
    }

    int res = 0;

    for (int i = 1; i <= 6; i++)
        res = max(res, dp[i]);

    cout << n - res << "\n";
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