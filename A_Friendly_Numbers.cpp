#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sumDigits(ll num)
{
    ll sumDig = 0;

    while (num)
    {
        sumDig += num % 10;
        num /= 10;
    }

    return sumDig;
}

void solve()
{
    ll x;
    cin >> x;

    ll cnt = 0;

    for (ll y = x + 1; y <= x + 162; y++)
    {
        if (y - sumDigits(y) == x)
            cnt++;
    }

    cout << cnt << "\n";
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