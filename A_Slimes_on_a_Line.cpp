#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());

    bool allSame = true;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            allSame = false;
            break;
        }
    }

    if (!allSame)
        cout << (maxi - mini + 1) / 2 << "\n";
    else
        cout << 0 << "\n";
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