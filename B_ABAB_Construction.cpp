#include <bits/stdc++.h>
using namespace std;

bool check(string &s, int l, int r)
{
    if (l > r)
        return true;

    if (l % 2 == 0)
    {
        if (s[l] != 'a' || s[r] != 'a')
            return false;
    }
    else
    {
        if (s[l] != 'b' || s[r] != 'b')
            return false;
    }

    return check(s, l + 1, r - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string x;
        cin >> x;

        if (check(x, 0, n - 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}