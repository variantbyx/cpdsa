#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

int binExpo(int a, int b)
{

    int ans = 1;

    a %= mod;

    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        ;

        a = (a * a) % mod;
        b >>= 1;
    }

    return ans;
}

void solve()
{

    int n;
    cin >> n;

    int ans = binExpo(2, n);

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}