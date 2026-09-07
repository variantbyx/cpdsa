#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    vector<pair<int, int>> q(m);

    for (auto &[i, x] : q)
    {
        cin >> i >> x;
        i--;
    }

    int prev = 0;
    for (int qq = 0; qq < m; qq++)
    {
        auto [i, x] = q[qq];
        a[i] += x;
        if (a[i] > h)
        {
            for (int k = qq; k >= prev; k--)
            {
                auto [i1, x1] = q[k];
                a[i1] -= x1;
            }
            prev = qq + 1;
        }
    }

    for (auto &x : a)
        cout << x << " ";

    cout << "\n";
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