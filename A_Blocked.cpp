#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    // check duplicacy
    unordered_map<int, int> mp;

    for (int x : a)
        mp[x]++;

    bool isDupli = false;
    if (mp.size() != n)
        isDupli = true;

    if (isDupli)
        cout << "-1\n";

    else
    {
        sort(rbegin(a), rend(a));
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << "\n";
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