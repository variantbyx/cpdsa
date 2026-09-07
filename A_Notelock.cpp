// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     string s;
//     cin >> s;
//     vector<bool> protect(n, false);
//     int minPos = 0;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int p = i + 1;
//         if (!protect[p] && s[p] == '1')
//         {
//             for (int j = 0; j < k - 2; j++)
//             {

//                 if (s[j + 1] != '1')
//                 {
//                     protect[p] = true;
//                     s[p] = '0';
//                 }
//             }
//             cnt++;
//         }
//     }

//     minPos = max(minPos, cnt);
//     cout << minPos << "\n";
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> o;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                o.push_back(i);
        }

        if (o.empty())
        {
            cout << 0 << "\n";
            continue;
        }

        int ans = 1;
        for (int i = 1; i < (int)o.size(); i++)
        {

            if (o[i] - o[i - 1] >= k)
                ans++;
        }

        cout << ans << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
