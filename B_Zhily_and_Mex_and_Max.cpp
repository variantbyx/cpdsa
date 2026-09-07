#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;

    for (ll x : a)
        mp[x]++;

    vector<ll> ans;

    ll mx = *max_element(a.begin(), a.end());
    ans.push_back(mx);
    mp[mx]--;

    // put all the first occurence
    ll mex = 0;
    while (mp[mex] > 0)
    {
        ans.push_back(mex);
        mp[mex]--;
        mex++;
    }

    vector<ll> rem;

    for (auto &it : mp)
    {
        ll x = it.first;
        ll cnt = it.second;
        while (cnt--)
        {
            rem.push_back(x);
        }
    }

    sort(rbegin(rem), rend(rem));

    for (auto x : rem)
        ans.push_back(x);

    ll curr_mex = 0, curr_max = 0, res = 0;

    map<ll, ll> seen;

    for (auto x : ans)
    {
        seen[x]++;

        while (seen[curr_mex])
            curr_mex++;

        curr_max = max(curr_max, x);

        res += curr_max + curr_mex;
    }
    cout << res << "\n";
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