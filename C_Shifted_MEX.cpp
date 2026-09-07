#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int chain = 0, el = a[i];
        for (int j = i; j < n; j++)
        {
            if (el == a[j])
            {
                chain++;
                el++;
            }
        }
        ans = max(ans, chain);
    }

    cout << ans << "\n";
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