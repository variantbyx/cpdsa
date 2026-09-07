#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt[5] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    // group of 4
    int taxi = 0;
    taxi += cnt[4];

    // group of 3
    taxi += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    // group of 2
    taxi += cnt[2] / 2;
    if (cnt[2] % 2)
    {
        taxi++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    // group of 1
    taxi += (cnt[1] + 3) / 4;

    cout << taxi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}