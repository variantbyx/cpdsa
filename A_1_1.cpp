#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' && s[i + 1] == '1')

            s[i] = '1';
    }

    int oCnt = 0;
    for (char c : s)
        if (c == '1')
            oCnt++;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' && s[i + 1] == '1')

            s[i] = '0';
    }

    int oCnt2 = 0;
    for (char c : s)
        if (c == '1')
            oCnt2++;

    cout << oCnt2 << " " << oCnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}