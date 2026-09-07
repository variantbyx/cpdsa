#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total ^= a[i];
    }

    if (total == 0)
    {
        cout << "YES\n";
        return;
    }

    int pref = 0;
    bool found = false;

    for (int i = 0; i < n - 1; i++)
    {
        pref ^= a[i];

        if (pref == total)
            found = true;

        if (found && pref == 0)
        {
            cout << "YES\n";
            return;
        }
    }

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