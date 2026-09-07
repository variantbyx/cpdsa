
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, a, b;
    cin >> l >> a >> b;

    int prize_ptr = a;
    vector<int> visited(l, 0);

    while (!visited[a])
    {
        prize_ptr = max(prize_ptr, a);
        visited[a] = 1;
        a = (a + b) % l;
    }
    cout << prize_ptr << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}