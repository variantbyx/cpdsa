#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(4));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char ch;
            cin >> grid[i][j];
        }
    }

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 4; j >= 0; j--)
        {
            if (grid[i][j] == '#')
            {
                ans.push_back(j + 1);
            }
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << "\n";
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