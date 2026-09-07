#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> allChars(26, 0);

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        ch = tolower(ch);
        int num = ch - 'a';
        allChars[num]++;
    }

    bool ok = true;

    for (int i = 0; i < 26; i++)
    {
        if (allChars[i] == 0)
        {
            cout << "NO\n";
            return;
        }
    }

    if (ok)
        cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}