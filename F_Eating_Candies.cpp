#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ls = 0, rs = 0, ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (ls <= rs)
        {
            ls += a[l];
            l++;
        }
        else
        {
            rs += a[r];
            r--;
        }
        if (ls == rs)
        {
            ans = l + (n - 1 - r);
        }
    }
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