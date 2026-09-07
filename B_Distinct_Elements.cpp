#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> a(n);
    int val = 1;
    a[0] = 1;

    for (int i = 1; i < n; i++)
    {
        ll diffPrev = b[i - 1] - (i >= 2 ? b[i - 2] : 0);
        ll diffCurr = b[i] - b[i - 1];

        if (diffCurr > diffPrev)
            a[i] = ++val; // new distinct element
        else
            a[i] = a[i - 1]; // repeat previous
    }

    for (int x : a)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
