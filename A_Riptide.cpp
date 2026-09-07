#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    vector<int> a(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0])
    {
        cout << 0 << "\n";
        return;
    }

    cout << min(a[1] - a[0], a[2] - a[1]) << "\n";
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