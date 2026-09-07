#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + b[i];

    vector<int> full(n + 2, 0);
    vector<int> extra(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        int target = pref[i - 1] + a[i];

        int pos = lower_bound(pref.begin() + 1,
                              pref.end(),
                              target) -
                  pref.begin();

        full[i]++;

        if (pos <= n)
        {
            full[pos]--;

            int consumed =
                pref[pos - 1] - pref[i - 1];

            extra[pos] += a[i] - consumed;
        }
        else
        {
            full[n + 1]--;
        }
    }

    int active = 0;

    for (int i = 1; i <= n; i++)
    {
        active += full[i];

        cout << active * b[i] + extra[i] << " ";
    }

    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}