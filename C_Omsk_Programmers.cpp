#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;

    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    int rs = abs(a - b);
    int ops = 0;

    if (a > b)
        swap(a, b);

    while (b > 0)
    {
        b /= x;
        ops++;

        rs = min(rs, ops + abs(a - b));
        if (a > b)
            swap(a, b);
    }

    cout << rs << "\n";
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