#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    // if 1 digit

    for (char ch : s)
    {
        if (!((ch - '0') % 8))
        {
            cout << "YES\n";
            cout << ch << "\n";
            return;
        }
    }

    // if 2 digit

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int l = (s[i] - '0') * 10 + s[j] - '0';
            if (!(l % 8))
            {
                cout << "YES\n";
                cout << l << "\n";
                return;
            }
        }
    }

    // if 3 digit

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int l = (s[i] - '0') * 100 + (s[j] - '0') * 10 + s[k] - '0';
                if (!(l % 8))
                {
                    cout << "YES\n";
                    cout << l << "\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}