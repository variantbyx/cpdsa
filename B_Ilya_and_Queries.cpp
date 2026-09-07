#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> pf(n, 0);

    for (int i = 1; i < n; i++)
    {
        pf[i] = pf[i - 1];
        if (s[i] == s[i - 1])
            pf[i]++;
    }

    int m;
    cin >> m;

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        cout << pf[r - 1] - pf[l - 1] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}