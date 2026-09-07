#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> f(n * n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            f[x]++;
        }
    }

    int mx = 0;

    for (int i = 0; i < n * n + 1; i++)
        mx = max(mx, f[i]);

    cout << (n * n - n < mx ? "NO\n" : "YES\n");
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