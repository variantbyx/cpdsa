#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = *max_element(a.begin(), a.end());

    int sum = accumulate(a.begin(), a.end(), 0);

    if (2 * mx <= sum && sum % 2 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}