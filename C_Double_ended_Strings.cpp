#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin >> a;

    string b;
    cin >> b;

    int n = a.size(), m = b.size();

    int mostCom = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int len = 0;
            while (i + len < n && j + len < m && a[i + len] == b[j + len])
            {
                len++;
                mostCom = max(mostCom, len);
            }
        }
    }

    int reqDel = m + n - 2 * mostCom;
    cout << reqDel << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}