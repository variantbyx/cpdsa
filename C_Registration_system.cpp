#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<string, int> db;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (db[s] == 0)
        {
            cout << "OK" << "\n";
        }
        else
        {
            cout << s << db[s] << "\n";
        }
        db[s]++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}