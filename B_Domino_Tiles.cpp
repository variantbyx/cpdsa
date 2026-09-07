// // #include <bits/stdc++.h>
// // using namespace std;

// // const long long MOD = 998244353;

// // void solve()
// // {
// //     int n;
// //     cin >> n;

// //     string s;
// //     cin >> s;

// //     long long ans = 0;

// //     for (int oddStart = 0; oddStart < 2; oddStart++)
// //     {
// //         for (int evenStart = 0; evenStart < 2; evenStart++)
// //         {

// //             bool ok = true;

// //             for (int i = 0; i < n; i++)
// //             {
// //                 char expected;

// //                 if (i % 2 == 0)
// //                 {
// //                     expected = char('0' + (oddStart ^ ((i / 2) & 1)));
// //                 }
// //                 else
// //                 {
// //                     expected = char('0' + (evenStart ^ ((i / 2) & 1)));
// //                 }

// //                 if (s[i] != '?' && s[i] != expected)
// //                 {
// //                     ok = false;
// //                     break;
// //                 }
// //             }

// //             if (ok)
// //                 ans++;
// //         }
// //     }

// //     cout << ans % MOD << '\n';
// // }

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t;
// //     cin >> t;

// //     while (t--)
// //         solve();

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 998244353;

// void solve()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     if (n == 2)
//     {
//         long long ans = 1;

//         for (char c : s)
//             if (c == '?')
//                 ans = (ans * 2) % MOD;

//         cout << ans << '\n';
//         return;
//     }

//     long long dp[2][2][2] = {};

//     for (int b0 = 0; b0 <= 1; b0++)
//     {
//         if (s[0] != '?' && s[0] - '0' != b0)
//             continue;

//         for (int b1 = 0; b1 <= 1; b1++)
//         {
//             if (s[1] != '?' && s[1] - '0' != b1)
//                 continue;

//             dp[1][b0][b1] = 1;
//         }
//     }

//     for (int i = 2; i < n; i++)
//     {

//         long long ndp[2][2][2] = {};

//         for (int a = 0; a <= 1; a++)
//         {
//             for (int b = 0; b <= 1; b++)
//             {

//                 long long cur = dp[1][a][b];
//                 if (!cur)
//                     continue;

//                 for (int c = 0; c <= 1; c++)
//                 {

//                     if (s[i] != '?' && s[i] - '0' != c)
//                         continue;

//                     int w1 = a + b;
//                     int w2 = b + c;

//                     if (w1 == w2)
//                         continue;

//                     ndp[1][b][c] =
//                         (ndp[1][b][c] + cur) % MOD;
//                 }
//             }
//         }

//         memcpy(dp, ndp, sizeof(ndp));
//     }

//     long long ans = 0;

//     for (int a = 0; a <= 1; a++)
//     {
//         for (int b = 0; b <= 1; b++)
//         {
//             ans = (ans + dp[1][a][b]) % MOD;
//         }
//     }

//     cout << ans << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//         solve();
// }

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 2)
    {
        long long ans = 1;
        for (char c : s)
            if (c == '?')
                ans = (ans * 2) % MOD;

        cout << ans << '\n';
        return;
    }

    long long dp[3][2] = {};

    for (int b0 = 0; b0 <= 1; b0++)
    {
        if (s[0] != '?' && s[0] - '0' != b0)
            continue;

        for (int b1 = 0; b1 <= 1; b1++)
        {
            if (s[1] != '?' && s[1] - '0' != b1)
                continue;

            int weight = b0 + b1;

            dp[weight][b1]++;
        }
    }

    for (int i = 2; i < n; i++)
    {

        long long ndp[3][2] = {};

        for (int lastWeight = 0; lastWeight <= 2; lastWeight++)
        {

            for (int lastBit = 0; lastBit <= 1; lastBit++)
            {

                long long ways = dp[lastWeight][lastBit];

                if (!ways)
                    continue;

                for (int curBit = 0; curBit <= 1; curBit++)
                {

                    if (s[i] != '?' && s[i] - '0' != curBit)
                        continue;

                    int newWeight = lastBit + curBit;

                    if (newWeight == lastWeight)
                        continue;

                    ndp[newWeight][curBit] += ways;
                    ndp[newWeight][curBit] %= MOD;
                }
            }
        }

        memcpy(dp, ndp, sizeof(dp));
    }

    long long ans = 0;

    for (int w = 0; w <= 2; w++)
    {
        for (int b = 0; b <= 1; b++)
        {
            ans = (ans + dp[w][b]) % MOD;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}