#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }

    int diagSum = 0;

    for (int i = 0; i < n; i++)
        diagSum += mat[i][i];

    diagSum /= 2;

    for (int i = 0; i < n; i++)
    {
        int totalVal = 0;
        for (int j = 0; j < n; j++)
            totalVal += mat[i][j];
        int val = (totalVal - diagSum) / n;
        cout << val << " ";
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