#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
        else if (mx > a[i])
            mx += a[i];
    }

    cout << mx << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}