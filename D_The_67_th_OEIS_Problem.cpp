#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> sieve(ll limit)
{
    vector<bool> isPrime(limit + 1, true);
    vector<ll> primes;

    if (limit >= 0)
        isPrime[0] = false;
    if (limit >= 1)
        isPrime[1] = false;

    for (ll i = 2; i <= limit / i; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }

    for (ll i = 2; i <= limit; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}

void solve()
{
    ll n;
    cin >> n;

    ll limit = max(10LL, 2 * n);
    vector<ll> primes;

    while ((ll)primes.size() < n + 1)
    {
        primes = sieve(limit);
        limit *= 2;
    }

    for (ll i = 0; i < n; i++)
    {
        cout << primes[i] * primes[i + 1] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}