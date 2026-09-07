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

    vector<int> pf(n);

    pf[0] = a[0];

    for (int i = 1; i < n; i++)
        pf[i] = a[i] + pf[i - 1];

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int ans = lower_bound(pf.begin(), pf.end(), x) - pf.begin();

        cout << ans + 1 << "\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}