#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int p;
    cin >> p;

    int x = a[p];

    int lCnt = 0, rCnt = 0;
    int pre = 0;
    for (int i = 1; i < p; i++)
    {
        int newel = a[i] ^ x;
        if (pre != newel)
            lCnt++;
        pre = newel;
    }

    pre = 0;
    for (int i = p + 1; i <= n; i++)
    {
        int newel = a[i] ^ x;
        if (pre != newel)
            rCnt++;
        pre = newel;
    }

    int res = max(lCnt, rCnt);
    if (res % 2 == 1)
        res++;

    cout << res << "\n";
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