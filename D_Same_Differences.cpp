#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int d = x - i;

        cnt += mp[d];

        mp[d]++;
    }

    // for (int j = 0; j < n; j++)
    // {
    //     for (auto &it : mp)
    //     {
    //         int i = it.second;

    //         if (j > i)
    //         {
    //             if (mp.count(a[j] - j))
    //             {
    //                 cnt++;
    //             }
    //         }
    //     }
    // }

    cout << cnt << "\n";
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