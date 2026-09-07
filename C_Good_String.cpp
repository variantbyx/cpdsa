#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int best = 0;

    for (char a = '0'; a <= '9'; a++)
    {
        for (char b = '0'; b <= '9'; b++)
        {

            int len = 0;
            char expected = a;

            for (char ch : s)
            {
                if (ch == expected)
                {
                    len++;

                    if (a != b)
                    {
                        expected = (expected == a ? b : a);
                    }
                }
            }

            if (a != b && len % 2)
            {
                len--;
            }

            best = max(best, len);
        }
    }

    cout << n - best << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}