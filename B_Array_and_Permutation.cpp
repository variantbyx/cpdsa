#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &p, vector<int> &a)
{
    unordered_map<int, vector<int>> pos;

    // store all indices of values in a
    for (int i = 0; i < a.size(); i++)
        pos[a[i]].push_back(i);

    int last = -1;

    for (int x : p)
    {
        if (!pos.count(x))
            return false;

        auto &v = pos[x];

        // find first index > last
        auto it = upper_bound(v.begin(), v.end(), last);

        if (it == v.end())
            return false;

        last = *it;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n), a(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (check(p, a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}