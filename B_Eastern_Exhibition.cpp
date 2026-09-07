#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a, b;

    int temp = n;

    while (temp--)
    {
        int x, y;
        cin >> x >> y;

        a.push_back(x);
        b.push_back(y);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;

    if (n % 2)
    {
        cout << 1 << "\n";
        return;
    }

    if (n % 2 == 0)
    {
        int l1 = a[n / 2 - 1], l2 = a[n / 2];
        int r1 = b[n / 2 - 1], r2 = b[n / 2];
        ans = (l2 - l1 + 1) * (r2 - r1 + 1);
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