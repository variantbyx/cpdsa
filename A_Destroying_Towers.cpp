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

    vector<int> pfMin(n);

    pfMin[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pfMin[i] = min(pfMin[i - 1], a[i]);
    }

    int sum = 0;

    for (int x : pfMin)
        sum += x;

    cout << sum << "\n";
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