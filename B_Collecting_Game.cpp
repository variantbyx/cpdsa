#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        vector<ll> b;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                b.push_back(a[j]);
            }
        }

        sort(b.begin(), b.end());
        ll score = a[i];

        ll cnt = 0;
        for (ll x : b)
        {
            if (score >= x)
            {
                score += x;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << " ";
    }
    cout << "\n";
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