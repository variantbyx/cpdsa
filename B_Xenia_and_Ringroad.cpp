#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m);

    for (int i = 0; i < m; i++)
        cin >> a[i];

    // vector<int> ringRoad(n);

    // for (int i = 0; i < n; i++)
    //     ringRoad[i] = i + 1;

    ll startPos = 1;

    ll totalCost = 0;

    for (int i = 0; i < m; i++)
    {
        ll targetPos = a[i];
        if (targetPos >= startPos)

            totalCost += targetPos - startPos;

        else
            totalCost += (n - startPos) + targetPos;

        startPos = targetPos;
    }

    cout << totalCost << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}