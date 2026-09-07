#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> a(6), b(6), c(6);

    for (int i = 0; i < 6; i++)
        cin >> a[i];
    for (int i = 0; i < 6; i++)
        cin >> b[i];
    for (int i = 0; i < 6; i++)
        cin >> c[i];

    int cnt = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                vector<int> v = {a[i], b[j], c[k]};
                sort(v.begin(), v.end());

                if (v[0] == 4 && v[1] == 5 && v[2] == 6)
                    cnt++;
            }
        }
    }

    double ans = (double)cnt / 216.0;

    cout << fixed << setprecision(10) << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}