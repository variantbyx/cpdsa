#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        if (!mp.count(a[i]))
            mp[a[i]] = i;
    }

    while (q--)
    {
        int t;
        cin >> t;

        int curr = mp[t];

        cout << curr << " ";

        for (auto &it : mp)
        {
            if (it.second < curr)
            {
                it.second++;
            }
        }
        mp[t] = 1;
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}