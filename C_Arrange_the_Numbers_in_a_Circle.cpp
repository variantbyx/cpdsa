#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (auto &it : a)
        cin >> it;

    ll o = 0, bs = 0, bCnt = 0;
    vector<ll> b;

    for (ll x : a)
    {
        if (x == 1)
            o++;
        else
        {
            b.push_back(x);
            bs += x;
            bCnt++;
        }
    }

    ll rs = 0;
    ll add = 0;

    if (bCnt == 0)
    {
        rs = 0;
    }
    else if (bCnt == 1)
    {
        ll x = b[0];

        rs = x + min(o, x / 2);

        if (rs < 3)
            rs = 0;
    }
    else
    {
        for (ll x : b)
            add += max(0LL, x / 2 - 1);

        rs = bs + min(o, add);
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