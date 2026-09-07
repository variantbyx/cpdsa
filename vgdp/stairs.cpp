#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
    if (n <= 1)
        return 1;

    if (n == 2)
        return 2;

    return solve(n - 1) + solve(n - 2) + solve(n - 3);
}

int findWays(int n)
{
    return solve(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    cin >> n;
    while (t--)
        cout << findWays(n) << "\n";
    return 0;
}