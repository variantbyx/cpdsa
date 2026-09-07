#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    // unordered_map<int, int> mp;

    // for (int i = 0; i < n; i++)
    // {
    //     mp[a[i]] = i;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (!mp.count(b[i]) && a[i] > b[i])
    //     {
    //         cout << -1 << "\n";
    //         return;
    //     }
    // }
    // int swaps = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == b[i])
    //         continue;
    //     else if (a[i] < b[i])
    //     {
    //         a[i] += (b[i] - a[i]);
    //     }
    //     else
    //     {
    //         if (mp.count(b[i]) && mp[b[i]] <= b[i])
    //         {
    //             swap(a[i], a[mp[b[i]]]);
    //             swaps += mp[b[i]];
    //         }
    //     }
    // }

    // cout << swaps << "\n";

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (; j < n && a[j] > b[i]; j++)
            ;
        if (j == n)
        {
            ans = -1;
            break;
        }

        for (; j > i; j--)
        {
            swap(a[j], a[j - 1]);
            ans++;
        }
    }

    cout << ans << "\n";
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