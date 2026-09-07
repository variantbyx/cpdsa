#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        vector<int> cnt(26, 0), need(26, 0);
        for (char c : t)
            cnt[c - 'a']++;
        for (char c : s)
            need[c - 'a']++;
        bool ok = true;
        for (int i = 0; i < 26; i++)
            if (cnt[i] < need[i])
            {
                ok = false;
                break;
            }
        if (!ok)
        {
            cout << "Impossible\n";
            continue;
        }
        // subtract needs
        for (int i = 0; i < 26; i++)
            cnt[i] -= need[i];
        // build remaining sorted string
        string rem;
        rem.reserve(t.size() - s.size());
        for (int i = 0; i < 26; i++)
        {
            rem.append(cnt[i], char('a' + i));
        }
        // find two insertion positions
        char first = s[0];
        int pos1 = rem.size(), pos2 = rem.size();
        for (int i = 0; i < (int)rem.size(); ++i)
        {
            if (rem[i] >= first)
            {
                pos1 = i;
                break;
            }
        }
        for (int i = 0; i < (int)rem.size(); ++i)
        {
            if (rem[i] > first)
            {
                pos2 = i;
                break;
            }
        }
        // build candidates
        string cand1 = rem.substr(0, pos1) + s + rem.substr(pos1);
        string cand2 = rem.substr(0, pos2) + s + rem.substr(pos2);
        string ans = min(cand1, cand2);
        cout << ans << '\n';
    }
    return 0;
}
