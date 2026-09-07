#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    double sum = 0.0;
    double total = 100.0 * (double)n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    double ans = (sum / total) * 100.0;

    cout << fixed << setprecision(12) << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}