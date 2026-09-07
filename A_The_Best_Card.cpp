#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPrime(long long n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    if (isPrime(n + 1))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}