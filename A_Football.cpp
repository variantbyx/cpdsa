#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        mp[s]++;
    }

    int maxCnt = 0;

    string ans;

    for (auto &it : mp)
    {
        string team = it.first;
        int f = it.second;
        if (f > maxCnt)
        {
            maxCnt = f;
            ans = team;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}