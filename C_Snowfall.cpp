#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a, b, c, d;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 6 == 0)
            a.push_back(x);
        else if (x % 2 == 0)
            b.push_back(x);
        else if (x % 3 == 0)
            c.push_back(x);
        else
            d.push_back(x);
    }

    vector<int> ans;

    for (auto x : a)
        ans.push_back(x);
    for (auto x : b)
        ans.push_back(x);
    for (auto x : d)
        ans.push_back(x);
    for (auto x : c)
        ans.push_back(x);

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

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