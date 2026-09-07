#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> dorm(n), rooms(m);

    for (int i = 0; i < n; i++)
        cin >> dorm[i];
    for (int j = 0; j < m; j++)
        cin >> rooms[j];

    vector<ll> pf(n + 1, 0);

    for (int k = 1; k <= n; k++)
        pf[k] = pf[k - 1] + dorm[k - 1];
    int d = 0;
    for (int x = 0; x < m; x++)
    {
        while (rooms[x] > pf[d])
            d++;

        ll room_no = d == 0 ? rooms[x] : rooms[x] - pf[d - 1];
        cout << d << " " << room_no << "\n";
    }
}
int main()
{
    solve();
    return 0;
}