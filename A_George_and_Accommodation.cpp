#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;

    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if ((q - p) >= 2)
            cnt++;
    }

    cout << cnt << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}