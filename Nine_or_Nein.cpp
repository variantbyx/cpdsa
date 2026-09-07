#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a + b == 9 || a - b == 9 || a * b == 9 || ((a % b == 0) && a / b == 9))
    {
        cout << "Nine\n";
    }
    else
    {
        cout << "Nein\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}