#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    int m = n * (n - 1) / 2;

    vector<int> a(m);

    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int need = n - 1;
    int idx = 0;

    vector<int> ans;

    while (need > 0)
    {
        ans.push_back(a[idx]);
        idx += need;
        need--;
    }

    ans.push_back(1000000000);

    // int m = n * (n - 1) / 2;

    // vector<int> a(m);

    // for (int i = 0; i < m; i++)
    // {
    //     cin >> a[i];
    // }

    // sort(a.begin(), a.end());

    // vector<int> ans;

    // ans.push_back(a[0]);

    // int cnt = n * (n - 1) / 2;

    // while (cnt > 0)
    // {
    //     for (int i = 1; i < n; i++)
    //     {
    //         if (a[i] != a[i - 1])
    //         {
    //             ans.push_back(a[i - 1]);
    //         }
    //     }
    //     cnt--;
    // }

    for (int x : ans)
        cout << x << " ";

    cout << "\n";
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