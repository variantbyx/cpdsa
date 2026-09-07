#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool ok = false;

    for (char ch : s)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}