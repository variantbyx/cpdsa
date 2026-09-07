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

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    int maxFreq = 0;
    int maxVal = 0;

    for (auto &[el, f] : mp)
    {
        if (f > maxFreq)
        {
            maxFreq = f;
            maxVal = el;
        }
    }

    int rest = n - maxFreq;

    int sum = accumulate(a.begin(), a.end(), 0LL);

    if (rest >= maxFreq - 1)
    {
        cout << sum << "\n";
        return;
    }

    else
    {
        int ans = 0;

        for (auto &x : a)
        {
            if (x != maxVal)
                ans += x;
        }

        ans += (rest + 2) * maxVal;

        cout << ans << "\n";
    }
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