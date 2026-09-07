#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i + 1 < (int)s.size(); i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }

    cout << (cnt <= 2 ? "YES" : "NO") << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}