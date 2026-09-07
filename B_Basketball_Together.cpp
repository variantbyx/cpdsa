#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p.begin(), p.end(), greater<int>());

    int count = 0;
    int players_used = 0;

    for (int i = 0; i < n; i++)
    {
        int needed = (d + 1 + p[i] - 1) / p[i];

        if (players_used + needed <= n)
        {
            count++;
            players_used += needed;
        }
        else
        {
            break;
        }
    }

    cout << count << "\n";
}

int main()
{
    solve();
    return 0;
}