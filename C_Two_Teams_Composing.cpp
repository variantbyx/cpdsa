#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> mp;

    for (int &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    int same = 0;

    for (auto &it : mp)
    {
        if (it.second > same)
        {
            same = it.second;
        }
    }

    int dist = n - same;

    if (same > dist)
        dist += 1;

    cout << min(dist, same) << "\n";
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