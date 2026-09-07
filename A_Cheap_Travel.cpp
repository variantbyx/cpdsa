#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // possibility
    // to ride n rides with a cost, to ride n rides with b cost, to ride using a and b cost but avoid decimal values

    int acost = n * a;
    int bcost = ((n + m - 1) / m) * b;
    int abcost = (n / m) * b + (n % m) * a;

    cout << min({acost, bcost, abcost}) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}