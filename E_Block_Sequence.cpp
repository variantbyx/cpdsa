// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n), pfCnt(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     pfCnt[0] = 1;

//     for (int i = 1; i < n; i++)
//         pfCnt[i] = 1 + pfCnt[i - 1];

//     int j = n - 1;
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == pfCnt[j] - pfCnt[i])
//         {
//             int k = i + pfCnt[j] - pfCnt[i];
//             int len = n - k;
//             maxLen = max(maxLen, len);
//         }
//         j--;
//     }

//     cout << maxLen << "\n";
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<int> dp(n + 1, 0);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         dp[i] = 1 + dp[i + 1]; // delete a[i]

//         if (i + a[i] < n) // keep a[i] as block start
//         {
//             dp[i] = min(dp[i],
//                         dp[i + a[i] + 1]);
//         }
//     }

//     cout << dp[0] << "\n";
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<long long> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int ans = n;

//     for (int i = 0; i < n; i++)
//     {
//         long long end = i + a[i]; // last index used by this block
//         if (end < n)
//         {
//             int del = n - (int)(end + 1); // delete everything after the block
//             ans = min(ans, del);
//         }
//     }

//     cout << ans << "\n";
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int del = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int cnt = n - i - 1;

//         if (a[i] == cnt)
//         {
//             del = min(del, 0LL);
//         }
//         else
//         {
//             del++;
//         }
//     }

//     cout << del << "\n";
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int blockEnd = i + a[i]; // block ends at this index (inclusive)
        if (blockEnd < n)
        {
            int deletions = n - 1 - blockEnd;
            ans = min(ans, deletions);
        }
    }

    cout << ans << endl;
    return 0;
}