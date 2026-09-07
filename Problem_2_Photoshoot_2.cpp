#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int cnt = 0, j = 0;

    vector<int> moved(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        while (j < n && moved[a[j]])
        {
            j++;
        }
        if (a[j] == b[i])
        {
            j++;
        }
        else
        {
            cnt++;
            moved[b[i]] = 1;
        }
    }

    cout << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}