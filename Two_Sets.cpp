#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    int sum = n * (n + 1) / 2;

    if (sum & 1)
    {
        cout << "NO\n";
        return;
    }

    int target = sum / 2;

    vector<int> st1, st2;

    for (int i = n; i >= 1; i--)
    {
        if (target >= i)
        {
            st1.push_back(i);
            target -= i;
        }
        else
            st2.push_back(i);
    }

    cout << "YES\n";

    cout << st1.size() << "\n";
    for (int x : st1)
        cout << x << " ";
    cout << "\n";

    cout << st2.size() << "\n";
    for (int y : st2)
        cout << y << " ";

    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}