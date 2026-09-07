// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll solve(ll n)
// {
//     if (n == 0)
//         return 1;
//     if (n < 0)
//         return 0;

//     ll ways = 0;

//     int mod = 1e9 + 7;

//     for (int i = 1; i <= 6; i++)
//     {
//         ways = (ways + solve(n - i)) % mod;
//     }

//     return ways;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;

//     cout << solve(n) << "\n";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> dp;

ll solve(ll n)
{

    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    ll ways = 0;

    int mod = 1e9 + 7;

    if (dp[n] != -1)
        return dp[n];

    for (int i = 1; i <= 6; i++)
    {
        ways = (ways + solve(n - i)) % mod;
    }

    return dp[n] = ways;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    dp.assign(n + 1, -1);
    cout << solve(n) << "\n";
    return 0;
}