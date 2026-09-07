#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;

    int maxi = 0;
    for (int i = -67; i <= 67; i++)
    {
        int a = min(x, i);
        maxi = max(maxi, a);
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