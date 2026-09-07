#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    ll l;
    cin >> n >> l;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    double firstGap = a[0];
    double lastGap = l - a[n - 1];

    // middle gap

    double maxGap = 0;

    for (int i = 1; i < n; i++)
        maxGap = max(maxGap, (a[i] - a[i - 1]) / 2.0);

    double ans = max({firstGap, lastGap, maxGap});

    cout << fixed << setprecision(10) << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}