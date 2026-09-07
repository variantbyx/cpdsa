#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    vector<long long> odd, even;
    for (int i = 0; i < n; ++i)
    {
        long long val;
        cin >> val;
        if (val % 2 != 0)
            odd.push_back(val);
        else
            even.push_back(val);
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    int cnt_o = odd.size();
    int cnt_e = even.size();

    vector<long long> pref(cnt_e + 1, 0);
    for (int i = 0; i < cnt_e; ++i)
    {
        pref[i + 1] = pref[i] + even[i];
    }

    for (int k = 1; k <= n; ++k)
    {
        int need = max(1, k - cnt_e);
        if (need % 2 == 0)
            need++;

        if (need > k || need > cnt_o)
        {
            cout << 0 << (k == n ? "" : " ");
        }
        else
        {
            long long ans = odd[0] + pref[k - need];
            cout << ans << (k == n ? "" : " ");
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
