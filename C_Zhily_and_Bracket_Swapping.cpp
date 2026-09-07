#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string b1, b2;
    cin >> b1 >> b2;

    int opnb = 0;
    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        opnb += (b1[i] == '(');
        opnb += (b2[i] == '(');

        int len = i + 1;
        int need = len + (len % 2);

        if (opnb < need)
            ok = false;
    }

    if (opnb != n)
        ok = false;
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}