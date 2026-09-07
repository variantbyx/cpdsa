#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<char>> ans(n, vector<char>(n));

    if (k == n * n - 1)
    {
        cout << "NO\n";
        return;
    }

    if (k == n * n)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "U";
            }
            cout << "\n";
        }
        return;
    }

    ans[0][0] = 'R', ans[0][1] = 'L';

    for (int i = 2; i < n * n - k; i++)
    {
        int r = i / n, c = i % n;

        if (!r)
            ans[r][c] = 'L';
        else
            ans[r][c] = 'U';
    }

    for (int i = n * n - k; i < n * n; i++)
    {
        int r = i / n, c = i % n;
        ans[r][c] = 'D';
    }

    cout << "YES\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
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