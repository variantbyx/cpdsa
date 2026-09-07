#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> b(n); // guaranteed that every integer from 0  to 𝑚−1  appears in 𝑏 at least once.

    for (int &x : b) // 𝑏𝑖 is the time unit at which person 𝑖 sits down.
        cin >> x;
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