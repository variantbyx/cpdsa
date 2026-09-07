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

    priority_queue<int, vector<int>, greater<int>> pq;

    int health = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        health += a[i];
        pq.push(a[i]);
        cnt++;

        if (health < 0)
        {
            health -= pq.top();
            pq.pop();
            cnt--;
        }
    }

    cout << cnt << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}