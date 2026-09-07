#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; i++)
        cin >> d[i].first >> d[i].second;

    sort(d.begin(), d.end());

    for (int i = 0; i < n; i++)
    {
        if (s > d[i].first)
            s += d[i].second;
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}