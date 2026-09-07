#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);

        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            mn = min(mn, p[i]);
        }

        cout << min(mn - 1, n / 2) << "\n";
    }
}