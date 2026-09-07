#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 1;

    int i = 0;

    while (s[i] == 'R')
    {
        cnt++;
        i++;
        if (s[i] == 'L')
            break;
    }

    cout << cnt << "\n";
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