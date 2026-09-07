#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ob = 0, cb = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            ob++;
        else
            cb++;
    }

    if (ob == cb)
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