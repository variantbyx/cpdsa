#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int yes = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Y')
            yes++;
    }

    if (yes <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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