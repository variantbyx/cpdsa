#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<vector<int>> showTime(n, vector<int>(2));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cin >> showTime[i][j];
//         }
//     }

//     vector<int> vis(n, 0);

//     vis[0] = 1;

//     int firstEndTime = showTime[0][1];

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             if (firstEndTime == showTime[i][0])
//             {
//                 vis[i] = 2;
//             }
//             else if (showTime[i][0] == showTime[i - 1][0] && showTime[i][1] == showTime[i - 1][1])
//             {
//                 vis[i] = 1;
//             }
//         }
//     }

//     bool ok = true;

//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             ok = false;
//             break;
//         }
//     }

//     if (ok)
//         cout << "YES\n";
//     else
//         cout
//             << "NO\n";
// }

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> showTime(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> showTime[i][0] >> showTime[i][1];
    }

    sort(showTime.begin(), showTime.end());

    long long tv1End = -1;
    long long tv2End = -1;

    for (int i = 0; i < n; i++)
    {
        int l = showTime[i][0];
        int r = showTime[i][1];

        // assign to TV1
        if (l > tv1End)
        {
            tv1End = r;
        }
        // assign to TV2
        else if (l > tv2End)
        {
            tv2End = r;
        }
        // both TVs busy
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}