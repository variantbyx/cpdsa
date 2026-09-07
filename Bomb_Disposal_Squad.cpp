#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> dur(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> dur[i];

    vector<ll> dmg(n + 1, 0);

    while (m--)
    {
        ll t1, d1;
        cin >> t1 >> d1;

        dmg[t1] += d1;

        ll side = d1 / 2;

        if (t1 > 1)
        {

            dmg[t1 - 1] += side;
        }
        if (t1 < n)
        {

            dmg[t1 + 1] += side;
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (dur[i] - dmg[i] >= 1)
            ans++;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}