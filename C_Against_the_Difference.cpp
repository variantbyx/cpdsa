#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    vector<int> dp(n + 1);

    map<int, vector<int>> pos;

    for (int i = 1; i <= n; i++)
    {
        pos[a[i - 1]].push_back(i);

        // skip
        dp[i] = dp[i - 1];

        int k = a[i - 1];

        if (pos[k].size() >= k)
        {
            int x = pos[k][pos[k].size() - k];
            dp[i] = max(dp[i], dp[x - 1] + k);
        }
    }

    cout << dp[n] << "\n";
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