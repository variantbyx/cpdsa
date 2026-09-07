#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> f(26, 0);

    for (char ch : s)
    {
        f[ch - 'a']++;
    }

    int maxi = INT_MIN;

    for (int x : f)
        maxi = max(maxi, x);

    for (char c : s)
    {
        if (f[c - 'a'] != maxi)
        {
            cout << c;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}