#include <bits/stdc++.h>
using namespace std;

typedef long long int;

const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    int prod = 1;

    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            cnt++;
        else if (s[i] == 'b')
        {
            prod = prod * (cnt + 1) % mod;
            cnt = 0;
        }
    }

    prod = prod * (cnt + 1) % mod;
    int ans = (prod - 1 + mod) % mod;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}