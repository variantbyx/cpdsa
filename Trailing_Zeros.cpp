#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    int zeros = 0;

    for (int p = 5; p <= n; p *= 5)
    {
        zeros += n / p;
    }

    cout << zeros << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}