#include <bits/stdc++.h>
using namespace std;

#define ll long long

int bfs(ll n, ll k)
{
    if (k > n)
        return -1;
    if (n == k)
        return 0;

    queue<pair<ll, int>> q; // pile, time

    unordered_set<ll> st;

    q.push({n, 0});

    st.insert(n);

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();

        ll x = it.first;

        int t = it.second;

        ll f = x / 2;
        ll c = (x + 1) / 2;

        for (auto &child : {f, c})
        {
            if (child == k)
                return t + 1;
            if (child > k && !st.count(child))
            {
                st.insert(child);
                q.push({child, t + 1});
            }
        }
    }

    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        cout << bfs(n, k) << "\n";
    }

    return 0;
}