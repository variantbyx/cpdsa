#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int curr = a[0], ans = a[0];

    for (int i = 1; i < n; i++)
    {
        if ((a[i] & 1) != (a[i - 1] & 1))
            curr = max(a[i], curr + a[i]);
        else
            curr = a[i];

        ans = max(ans, curr);
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