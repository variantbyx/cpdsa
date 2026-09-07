#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int hcnt = 0;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            hcnt++;
            mx = max(mx, hcnt);
        }
        else
        {
            hcnt = 0;
        }
    }

    cout << (mx + 1) / 2 << "\n";
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