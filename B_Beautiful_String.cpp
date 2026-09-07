#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define clz __builtin_clzll

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll alen = clz(1) - clz(a);
    ll blen = clz(1) - clz(b);

    if (alen < blen)
    {
        cout << -1 << "\n";
        return;
    }

    if (alen == blen)
    {
        cout << 1 << "\n";
        cout << (a ^ b) << "\n";
        return;
    }

    cout << 2 << "\n";

    cout << (a ^ b ^ (1LL << alen)) << "\n";
    cout << (1 << alen) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}