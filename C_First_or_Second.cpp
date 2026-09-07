#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)cin >> a[i];
    
    ll curr = -a[n - 1];
    ll bestDiff = a[n - 1];
    ll res = 0;

    for (int i = n - 2; i >= 0; --i)
    {
        ll el = a[i];
        ll maxi = curr + max(0LL, el + bestDiff);

        curr -= el;
        bestDiff = max(bestDiff, maxi - curr);

        if (i == 0)res = maxi;
    }
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while (t--)solve();
        
    return 0;
}
