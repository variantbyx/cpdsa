#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> temp = a;

    sort(temp.begin(), temp.end());

    int m = temp[n / 2];

    vector<int> dp(n + 1, INT_MIN / 4);

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int lt = 0, eq = 0, gt = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] < m)
                lt++;
            else if (a[j] == m)
                eq++;
            else
                gt++;

            if ((i - j) % 2 == 0)
                continue;
            if (lt + eq > gt && gt + eq > lt)
                dp[i] = max(dp[i], dp[j] + 1);
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