#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << "\n";
        return;
    }

    ll r = n % 4;

    if (r == 1)
        cout << 8 << "\n";
    else if (r == 2)
        cout << 4 << "\n";
    else if (r == 3)
        cout << 2 << "\n";
    else
        cout << 6 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}