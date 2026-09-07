#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll all = n / 3, rest = n % 3;

    ll minCost = min(3LL * a, b);
    ll minCostAll = all * minCost;
    ll minCostRest = min(rest * a, b);
    ll totalCost = minCostAll + minCostRest;

    cout << totalCost << "\n";
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