#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    unordered_map<ll, pair<ll, ll>> mp;

    for (int i = 0; i < n; i++)
    {
        ll it;cin >> it;
        ll cnt = 0;
        ll real= it;

        if (real == 1)
        {
            mp[1].first++;
            mp[1].second += 0;
            mp[2].first++;
            mp[2].second += 1;
        }
        else
        {
            while (1)
            {
                mp[it].first++;
                mp[it].second += cnt;
                if (it == 1)break;
                if (it % 2 == 0)it /= 2;
                else it++;
                cnt++;
            }
        }
    }

    ll rs = LLONG_MAX;

    for (auto &x : mp)
    {
        if (x.second.first == n)rs = min(rs, x.second.second);
    }

    cout << rs << "\n";
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