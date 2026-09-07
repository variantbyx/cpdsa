#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    priority_queue<pair<int, ll>> pq; // (expiry, remaining milk)
    ll ans = 0;

    int idx = 0;
    int day = a[0].first;

    while (idx < n || !pq.empty())
    {

        // add milk arriving today
        while (idx < n && a[idx].first == day)
        {
            int expiry = a[idx].first + k - 1;
            pq.push(make_pair(expiry, (ll)a[idx].second));
            idx++;
        }

        // remove expired milk
        while (!pq.empty() && pq.top().first < day)
        {
            pq.pop();
        }

        ll need = m;

        // drink freshest milk first
        while (need > 0 && !pq.empty())
        {
            pair<int, ll> cur = pq.top();
            pq.pop();

            int expiry = cur.first;
            ll qty = cur.second;

            ll take = min(qty, need);
            qty -= take;
            need -= take;

            if (qty > 0)
            {
                pq.push(make_pair(expiry, qty));
            }
        }

        if (need == 0)
            ans++;

        day++;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
