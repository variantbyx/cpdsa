#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int x = a[n - 1], y = a[n - 2];

    vector<int> temp;

    temp.push_back(x);
    temp.push_back(y);

    int p = x, q = y;

    while (temp.size() < n)
    {
        int r = p % q;

        if (r == 0)
            break;

        temp.push_back(r);

        p = q;
        q = r;
    }

    sort(temp.begin(), temp.end());

    if (temp == a)
    {
        cout << x << " " << y << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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