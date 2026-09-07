#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cal_xor(ll n)
{
    ll a = n % 4;
    if (a == 0)
        return n;
    else if (a == 1)
        return 1;
    else if (a == 2)
        return n + 1;
    else
        return 0;
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll arr_xor = cal_xor(a - 1);

    if (arr_xor == b)
        cout << a << endl;
    else if ((arr_xor ^ b) != a)
        cout << a + 1 << endl;
    else
        cout << a + 2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}