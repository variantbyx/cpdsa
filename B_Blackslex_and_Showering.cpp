#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n <= 2)
    {
        cout << 0 << "\n";
        return;
    }

    int sum = 0;
    for (int i = 1; i < n; i++)
        sum += abs(a[i] - a[i - 1]);

    int ans = min({sum,
                   sum - abs(a[1] - a[0]),
                   sum - abs(a[n - 1] - a[n - 2])});

    for (int i = 1; i < n - 1; i++)
    {
        int remove = abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]);
        int add = abs(a[i - 1] - a[i + 1]);
        ans = min(ans, sum - remove + add);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
