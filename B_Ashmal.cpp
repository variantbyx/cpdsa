#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> s[i];
    }

    string res = "";
    for (auto &x : s)
    {
        if (res + x > x + res)
        {
            res = x + res;
        }
        else
        {
            res = res + x;
        }
    }

    cout << res << endl;
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