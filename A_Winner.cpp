#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<string, int>> v(n);

    map<string, int> scorefinal;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        scorefinal[v[i].first] += v[i].second;
    }

    int maxScore = INT_MIN;

    for (auto &it : scorefinal)
    {
        maxScore = max(maxScore, it.second);
    }

    map<string, int> curr;

    for (int i = 0; i < n; i++)
    {
        string name = v[i].first;
        int sc = v[i].second;

        curr[name] += sc;

        if (curr[name] >= maxScore &&
            scorefinal[name] == maxScore)
        {
            cout << name << "\n";
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}