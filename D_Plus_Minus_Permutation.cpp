// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve()
// {
//     int n, x, y;
//     cin >> n >> x >> y;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         a[i] = i + 1;

//     sort(a.rbegin(), a.rend());

//     vector<int> vis(n, 0);

//     vector<int> permut(n);

//     for (int i = 0; i < n; i++)
//     {
//         int idx = i + 1;

//         if (idx % x == 0 && !vis[i])
//         {
//             permut[idx] = a[i];
//             vis[i] = 1;
//         }
//         else if (idx % y == 0 && !vis[i])
//         {
//             permut[idx] = a[n - i];
//             vis[n - i] = 1;
//         }
//         else
//         {
//             if (!vis[i])
//             {
//                 permut[i] = a[i];
//                 vis[i] = 1;
//             }
//         }
//     }

//     cout << accumulate(permut.begin(), permut.end(), 0LL) << "\n";
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

#define int long long

void solve()
{
    int n, x, y;

    cin >> n >> x >> y;

    int sumx = 0, sumy = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0)
        {
            sumx += i;
        }
        else if (i % y == 0)
        {
            sumy += i;
        }
    }

    cout << sumx - sumy << "\n";
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