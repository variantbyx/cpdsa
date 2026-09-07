#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            continue;

        ll mini = min(a[i], b[i]);
        ll maxi = max(a[i], b[i]);

        ll diff = maxi - mini;
        ll total = k1 + k2;

        ll ans = abs(diff - total);
        sum += pow(ans, 2);
    }

    cout << sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}