#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 10; i < n; i += 10)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > i)
            {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}