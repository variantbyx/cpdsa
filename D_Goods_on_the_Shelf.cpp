#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int distinct = set<int>(a.begin(), a.end()).size();

    vector<int> tmp = a;
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

    int blocks = tmp.size();

    if (blocks == distinct)
    {
        cout << "YES\n";
        return;
    }

    if (blocks > distinct + 4)
    {
        cout << "NO\n";
        return;
    }

    vector<array<int, 3>> segments;
    map<int, int> segmentCount;

    for (int i = 0; i < n;)
    {
        int j = i;

        while (j < n && a[j] == a[i])
            j++;

        segments.push_back({a[i], i, j - 1});
        segmentCount[a[i]]++;

        i = j;
    }

    vector<int> candidates;

    for (auto &[val, l, r] : segments)
    {
        if (segmentCount[val] <= 1)
            continue;

        for (int i = max(0LL, l - 1); i <= min(n - 1, l + 1); i++)
            candidates.push_back(i);

        for (int i = max(0LL, r - 1); i <= min(n - 1, r + 1); i++)
            candidates.push_back(i);
    }

    candidates.push_back(0);
    candidates.push_back(n - 1);

    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()),
                     candidates.end());

    bool ok = false;

    for (int i = 0; i < (int)candidates.size() && !ok; i++)
    {
        for (int j = i + 1; j < (int)candidates.size(); j++)
        {
            vector<int> affected;

            int p = candidates[i];
            int q = candidates[j];

            if (p > 0)
                affected.push_back(p - 1);
            if (p < n - 1)
                affected.push_back(p);

            if (q > 0)
                affected.push_back(q - 1);
            if (q < n - 1)
                affected.push_back(q);

            sort(affected.begin(), affected.end());
            affected.erase(unique(affected.begin(), affected.end()),
                           affected.end());

            int delta = 0;

            for (int x : affected)
                delta -= (a[x] != a[x + 1]);

            swap(a[p], a[q]);

            for (int x : affected)
                delta += (a[x] != a[x + 1]);

            swap(a[p], a[q]);

            if (blocks + delta == distinct)
            {
                ok = true;
                break;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}