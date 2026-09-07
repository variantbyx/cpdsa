#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // collect all possible candidate k values
    set<ll> candidates;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll diff = abs(a[i] - a[j]);

            // collect all divisors of diff
            for (ll d = 1; d * d <= diff; d++)
            {
                if (diff % d == 0)
                {
                    candidates.insert(d);
                    candidates.insert(diff / d);
                }
            }
        }
    }

    // try every candidate k
    for (auto &k : candidates)
    {
        set<ll> rem;

        for (int i = 0; i < n; i++)
        {
            rem.insert(a[i] % k);
        }

        // exactly 2 distinct remainders
        if (rem.size() == 2)
        {
            cout << k << "\n";
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}