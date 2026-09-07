#include <bits/stdc++.h>
using namespace std;

int dp[100005][2][2][2];

int maxAns(int idx, int aTaken, int bTaken, int cTaken, vector<int> &a, vector<int> &b, vector<int> &c)
{
    int n = a.size();

    if (aTaken && bTaken && cTaken)
        return 0;

    if (idx >= n)
        return -1e9;

    if (dp[idx][aTaken][bTaken][cTaken] != -1)
        return dp[idx][aTaken][bTaken][cTaken];

    int ans = maxAns(idx + 1, aTaken, bTaken, cTaken, a, b, c);

    if (!aTaken)
        ans = max(ans, a[idx] + maxAns(idx + 1, 1, bTaken, cTaken, a, b, c));

    if (!bTaken)
        ans = max(ans, b[idx] + maxAns(idx + 1, aTaken, 1, cTaken, a, b, c));

    if (!cTaken)
        ans = max(ans, c[idx] + maxAns(idx + 1, aTaken, bTaken, 1, a, b, c));

    return dp[idx][aTaken][bTaken][cTaken] = ans;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        cin >> c[i];

    memset(dp, -1, sizeof(dp));

    cout << maxAns(0, 0, 0, 0, a, b, c) << "\n";
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