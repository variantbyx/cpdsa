#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x = a[i];

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            int val = a[j] ^ x;
            maxi = max(maxi, val);
        }
    }

    cout << maxi << "\n";
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