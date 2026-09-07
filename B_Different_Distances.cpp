#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans;

    auto evenPattern = [&](int x, int y)
    {
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(x);
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(y);
        ans.push_back(x);
        ans.push_back(y);
    };

    if (n & 1)
    {
        vector<int> odd = {
            3, 1, 1, 2,
            2, 3, 3, 1,
            2, 3, 1, 2};

        for (int x : odd)
            ans.push_back(x);

        for (int i = 4; i <= n; i += 2)
            evenPattern(i, i + 1);
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
            evenPattern(i, i + 1);
    }

    for (int x : ans)
        cout << x << ' ';
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