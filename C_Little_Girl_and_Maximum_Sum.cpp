#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (auto &x : a)
        cin >> x;

    vector<int> freq(n + 2, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
        freq[i] += freq[i - 1];

    vector<int> cnt;

    for (int i = 1; i <= n; i++)
        cnt.push_back(freq[i]);

    sort(a.begin(), a.end());
    sort(cnt.begin(), cnt.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
        ans += a[i] * cnt[i];

    cout << ans << '\n';
}