#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int solve(vector<int> &coins, int n, int i, int sum)
{
    // base cases
    if (sum == 0)
        return 0;
    if (sum < 0)
        return INT_MAX;

    if (i == n)
        return INT_MAX;

    if (dp[i][sum] != -1)
        return dp[i][sum];

    int take = INT_MAX;

    int res = solve(coins, n, i, sum - coins[i]);

    if (res != INT_MAX)
        take = 1 + res;

    int skip = solve(coins, n, i + 1, sum);

    return dp[i][sum] = min(take, skip);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum;
    cin >> n >> sum;

    vector<int> coins(n);

    for (int &x : coins)
        cin >> x;
    dp.assign(n, vector<int>(sum + 1, -1));
    int ans = solve(coins, n, 0, sum);
    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
    return 0;
}