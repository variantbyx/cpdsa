#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;

    for (char ch : s)
        st.insert(ch);

    int req = st.size();

    int have = 0;

    int l = 0;

    unordered_map<char, int> mp;

    int ans = n;

    for (int r = 0; r < n; r++)
    {
        mp[s[r]]++;

        if (mp[s[r]] == 1)
            have++;

        while (req == have)
        {
            ans = min(ans, r - l + 1);

            mp[s[l]]--;

            if (mp[s[l]] == 0)
                have--;
            l++;
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}