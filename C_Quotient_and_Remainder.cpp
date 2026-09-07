#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> q(n), r(n);
        for (auto &x : q)
            cin >> x;

        multiset<long long> ms;
        for (auto &x : r)
        {
            cin >> x;
            ms.insert(x);
        }

        vector<long long> cap(n);
        for (int i = 0; i < n; i++)
            cap[i] = (k - q[i]) / (q[i] + 1);

        sort(cap.begin(), cap.end());

        long long ans = 0;
        for (long long c : cap)
        {
            if (c < 1)
                continue;
            auto it = ms.upper_bound(c);
            if (it == ms.begin())
                continue;
            --it;
            ms.erase(it);
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}
