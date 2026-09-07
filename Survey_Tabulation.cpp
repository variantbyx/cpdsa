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

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        mp[s]++;
    }
    int mx = INT_MIN;

    for (auto &it : mp)
    {
        mx = max(mx, it.second);
    }

    cout << mx << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}