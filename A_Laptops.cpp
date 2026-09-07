#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end());

    for (int i = 1; i < n; i++)
    {
        if (p[i - 1].second > p[i].second)
        {
            cout << "Happy Alex";
            return;
        }
    }

    cout << "Poor Alex";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}