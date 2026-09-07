#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    if (k == 0)
    {
        if (a[0] == 1)
            cout << -1;
        else
            cout << 1;
        return;
    }

    int kth = a[k - 1];

    if (k == n)
    {
        cout << kth << "\n";
    }

    if (a[k] == kth)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << kth << "\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}