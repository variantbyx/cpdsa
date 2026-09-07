#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            c0++;
        else if (x == 1)
            c1++;
        else
            c2++;
    }

    int pair = min(c1, c2);

    c1 -= pair;
    c2 -= pair;
    int ans = c0 + pair;
    ans += c1 / 3;
    ans += c2 / 3;

    cout << ans << "\n";
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