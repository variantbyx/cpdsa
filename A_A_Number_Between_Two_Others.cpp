#include <bits/stdc++.h>
using namespace std;

#define int long long

// bool check(int z, int x, int y)
// {
//     if (z % x == 0 && y % z != 0)
//         return true;
//     return false;
// }

// bool binarySearch(int x, int y)
// {
//     int l = x, r = y;

//     bool ok = false;

//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;

//         if (check(mid, x, y))
//         {
//             ok = true;
//             break;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }

//     return ok;
// }

void solve()
{
    int x, y;
    cin >> x >> y;

    // int ans = binarySearch(x, y);
    if (y / x == 2)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
    }
}

int32_t
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}