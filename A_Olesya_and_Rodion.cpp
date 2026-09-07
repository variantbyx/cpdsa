#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;

    if (t == 10 && n == 1)
    {
        cout << -1 << "\n";
        return;
    }

    if (t == 10 && n > 1)
    {
        cout << string(n - 1, '1') + '0';
        return;
    }

    cout << string(n, char('0' + t)) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}