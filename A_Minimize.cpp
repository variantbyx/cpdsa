#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int mini = INT_MAX;

    for (int c = a; c <= b; c++)
    {
        int val = (c - a) + (b - c);
        mini = min(mini, val);
    }

    cout << mini << "\n";
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