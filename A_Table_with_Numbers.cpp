#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, l;
    cin >> n >> h >> l;

    if (h > l)
        swap(h, l);

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mh = 0, ml = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
            mh++;
        if (a[i] <= l)
            ml++;
    }

    res = min(mh, ml - mh);

    mh -= res;

    res += mh / 2;

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