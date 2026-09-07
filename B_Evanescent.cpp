#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int blocks = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            blocks++;
    }

    bool reduce2 = false;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] &&
            s[i] != s[i - 1])
        {
            reduce2 = true;
            break;
        }
    }

    if (reduce2)
        cout << blocks - 2 << '\n';
    else if (blocks > 1)
        cout << blocks - 1 << '\n';
    else
        cout << blocks << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}