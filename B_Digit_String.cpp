#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = (int)s.size();

    int cnt4 = 0, cnt2 = 0;

    for (char ch : s)
    {
        if (ch == '4')
            cnt4++;
        else if (ch == '2')
            cnt2++;
    }

    int pref13 = 0, suff2 = cnt2, ans = INT_MAX;

    for (int i = 0; i <= n; i++)
    {
        ans = min(ans, pref13 + suff2);
        if (i == n)
            break;
        if (s[i] == '1' || s[i] == '3')
            pref13++;
        if (s[i] == '2')
            suff2--;
    }
    cout << cnt4 + ans << "\n";
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