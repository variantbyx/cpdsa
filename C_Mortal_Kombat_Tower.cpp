#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> dp;

int solve(vector<int> &a, int n, int idx, int turn)
{

    if (idx >= n)
        return 0;

    int ans = LLONG_MAX;

    if (dp[idx][turn] != -1)
        return dp[idx][turn];

    if (turn == 0)
    {
        // my friend's turn
        // if kill one boss
        ans = min(ans, a[idx] + solve(a, n, idx + 1, 1));

        // if kill two bosses

        if (idx + 1 < n)

            ans = min(ans, a[idx] + a[idx + 1] + solve(a, n, idx + 2, 1));
    }

    else
    {
        // my turn

        ans = min(ans, solve(a, n, idx + 1, 0));

        ans = min(ans, solve(a, n, idx + 2, 0));
    }

    return dp[idx][turn] = ans;
}

int findMinSkip(vector<int> &a, int n)
{

    // if (n == 1)
    // {
    //     if (a[0] == 1)
    //     {
    //         cout << 1 << "\n";
    //         return;
    //     }
    //     else
    //     {
    //         cout << 0 << "\n";
    //         return;
    //     }
    // }

    // if (a[0] == 1)
    // {
    //     cout << 2 << "\n";
    // }
    // else
    // {
    //     cout << 1 << "\n";
    // }

    // string s = "";

    // for (int x : a)
    // {
    //     s += to_string(x);
    // }

    // int cnt = 0;

    // for (int i = 0; i + 1 < s.size(); i += 4)
    // {
    //     cnt += (s[i] - '0') + (s[i + 1] - '0');
    // }

    // cout << cnt << "\n";

    dp.assign(n + 2, vector<int>(2, -1));

    return solve(a, n, 0, 0);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = findMinSkip(a, n);

        cout << ans << "\n";
    }
    return 0;
}