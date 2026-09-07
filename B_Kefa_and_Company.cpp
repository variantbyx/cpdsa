#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int sum = 0;
    int ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        sum += v[r].second;

        while (v[r].first - v[l].first >= d)
        {
            sum -= v[l].second;
            l++;
        }

        ans = max(ans, sum);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}