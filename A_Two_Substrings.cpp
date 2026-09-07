#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<int> ab, ba;
    for (int i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
            ab.push_back(i);
        if (s[i] == 'B' && s[i + 1] == 'A')
            ba.push_back(i);
    }

    for (auto &x : ab)
    {
        for (auto &y : ba)
        {
            if (abs(x - y) >= 2)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}