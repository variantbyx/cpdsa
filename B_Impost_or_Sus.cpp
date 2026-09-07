#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == 's')
        {
            i++;
            continue;
        }
        int j = i;
        while (j < n && s[j] == 'u')
            j++;
        int l = j - i;
        int req = 0;
        if (i == 0)
            req++;
        if (j == n)
            req++;
        int rem = l - req;
        if (rem < 0)
            rem = 0;
        ans += req + rem / 2;
        i = j;
    }
    cout << ans << '\n';
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