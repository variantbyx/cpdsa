#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    for (int x : a)
        mp[x]++;

    vector<int> cnt(m + 1);

    cnt[m] = mp[m];

    for (int i = m - 1; i >= 0; i--)
        cnt[i] = cnt[i + 1] + mp[i];

    int ans = 0;

    for (int i = 0; i <= m; i++)
    {
        ans = max(ans, cnt[i] + mp[2 * i]);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}