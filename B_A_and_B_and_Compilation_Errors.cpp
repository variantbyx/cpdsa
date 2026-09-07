#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n - 1);

    for (int j = 0; j < n - 1; j++)
    {
        cin >> b[j];
    }

    vector<int> c(n - 2);

    for (int k = 0; k < n - 2; k++)
    {
        cin >> c[k];
    }

    int suma = accumulate(a.begin(), a.end(), 0);
    int sumb = accumulate(b.begin(), b.end(), 0);
    int sumc = accumulate(c.begin(), c.end(), 0);

    cout << suma - sumb << "\n";
    cout << sumb - sumc << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}