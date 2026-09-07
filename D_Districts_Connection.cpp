#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // if all same then no

    unordered_map<int, int> mp;

    for (int x : a)
        mp[x]++;

    if (mp.size() == 1)
    {
        cout << "NO\n";
        return;
    }

    // case 1 : if unique 1

    bool f = false;
    int el = 0;
    for (auto &it : mp)
    {
        if (it.second == 1)
        {
            f = true;
            el = it.first;
            break;
        }
    }

    int elIdx = -1;

    if (f)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == el)
            {
                elIdx = i + 1;
                break;
            }
        }

        if (elIdx != -1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {

                if (i + 1 != elIdx)

                    cout << elIdx << " " << i + 1 << "\n";
            }
        }
    }

    // case 2" if not unique freq >=2

    else
    {
        cout << "YES\n";

        int sel = a[0], uIdx = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] != sel)
            {
                uIdx = i;
                break;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] != sel)
                cout << 1 << " " << i + 1 << "\n";
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == sel && i != 0)
            {
                cout << uIdx+1 << " " << i + 1 << "\n";
            }
        }
    }
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