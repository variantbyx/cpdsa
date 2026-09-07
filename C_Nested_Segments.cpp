#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<pair<int, int>, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second = i + 1;
    }

    //  l increasing
    // r decreasing

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         {
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;

    return a.first.first < b.first.first; });

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j].first.first >= v[i].first.first && v[j].first.second <= v[i].first.second)
    //         {
    //             cout << v[j].second << " " << v[i].second << "\n";
    //             return;
    //         }
    //     }
    // }

    int maxR = v[0].first.second;
    int maxIdx = v[0].second;

    for (int i = 1; i < n; i++)
    {
        int r = v[i].first.second;

        if (maxR >= r)
        {
            cout << v[i].second << " " << maxIdx << "\n";
            return;
        }
        maxR = r;
        maxIdx = v[i].second;
    }

    cout << -1 << " " << -1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}