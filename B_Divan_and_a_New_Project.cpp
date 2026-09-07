#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
        p.push_back({a[i], (i + 1)});

    sort(p.begin(), p.end(), greater<pair<int, int>>());

    vector<int> pos(n + 1);
    pos[0] = 0;
    int seq = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int visitNo = p[i].first;
        int idx = p[i].second;
        int lineNo;
        if (i % 2 == 0)
            lineNo = seq;

        else
            lineNo = -seq, seq++;
        pos[idx] = lineNo;
        sum += 2LL * abs(lineNo) * visitNo;
    }

    cout << sum << "\n";
    for (int i = 0; i <= n; i++)
        cout << pos[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}