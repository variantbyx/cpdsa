#include <bits/stdc++.h>
using namespace std;

bool check(string &s)
{
    if (!islower(s[0]))
        return false;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
            return false;
    }

    return true;
}

void solve()
{
    string s;
    cin >> s;

    string ans;

    if (check(s))
    {

        ans.push_back(toupper(s[0]));

        for (int i = 1; i < s.size(); i++)
            ans.push_back(tolower(s[i]));

        cout << ans << "\n";
    }
    else
    {
        cout << s << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}