#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int ones = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            ones++;
    }

    if (ones)
    {
        cout << n - ones << "\n";
        return;
    }

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int g = 0;
        for (int j = i; j < n; j++)
        {
            g = __gcd(g, a[j]);

            if (g == 1)
            {
                mini = min(mini, j - i + 1);
                break;
            }
        }
    }

    if (mini == INT_MAX)
    {
        cout << -1 << "\n";
        return;
    }

    cout << n + mini - 2 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}