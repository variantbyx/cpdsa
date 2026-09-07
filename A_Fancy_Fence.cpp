#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int x = 180 - n;
    if (360 % x != 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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