#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll n, x, s;
string u;

vector<vector<vi>> dp;

int solve(int idx, int op, int setd)
{
    if (idx == n)
        return 0;

    int &rs = dp[idx][op][setd];

    if (rs != -1)
        return rs;

    rs = solve(idx + 1, op, setd);

    if (u[idx] == 'I')
    {
        if (op < x)
            rs = max(rs,
                     1 + solve(idx + 1, op + 1, setd + 1));
    }
    else if (u[idx] == 'E')
    {
        if (setd < op * s)
            rs = max(rs,
                     1 + solve(idx + 1, op, setd + 1));
    }
    else
    {
        if (op < x)
            rs = max(rs,
                     1 + solve(idx + 1, op + 1, setd + 1));

        if (setd < op * s)
            rs = max(rs,
                     1 + solve(idx + 1, op, setd + 1));
    }

    return rs;
}

void solve()
{
    cin >> n >> x >> s;
    cin >> u;

    dp.assign(n + 1, vector<vi>(x + 1, vi(n + 1, -1)));

    cout << solve(0, 0, 0) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}