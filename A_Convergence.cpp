#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int rs = n, lcnt = 0;

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && a[j] == a[i])
            j++;
        int fq = j - i, gcnt = n - lcnt - fq, maxCnt = max(lcnt, gcnt);
        rs = min(rs, maxCnt);
        lcnt += fq;
        i = j;
    }

    cout << rs << '\n';
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