#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> time(n + 1);

    for (int i = 1; i <= n; i++)
        time[i] = i * 5;

    vector<int> pf(n + 1, 0);

    for (int i = 1; i <= n; i++)

        pf[i] = pf[i - 1] + time[i];

    int totalM = 240 - k;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pf[i] <= totalM)
            cnt++;
        else
            break;
    }

    cout << cnt << "\n";
}
int main()
{
    solve();
    return 0;
}