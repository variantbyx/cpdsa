#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s1 = "I hate";
    string s2 = " that I love";
    string s3 = " that I hate";

    if (n == 1)
    {
        cout << "I hate it\n";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 != 0)
                s1 += s3;
            else
                s1 += s2;
        }
        s1 += " it";
        cout << s1 << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}