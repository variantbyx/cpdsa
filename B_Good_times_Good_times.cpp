// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// vector<int> goodY;

// bool isGood(int x)
// {
//     if (x < 10)
//         return true;

//     bool vis[10] = {};
//     int cnt = 0;

//     while (x)
//     {
//         int d = x % 10;

//         if (!vis[d])
//         {
//             vis[d] = true;
//             if (++cnt > 2)
//                 return false;
//         }

//         x /= 10;
//     }

//     return true;
// }

// void genAllY(int curr, int d1, int d2, int len)
// {
//     if (curr > 1000000000LL)
//         return;

//     if (curr >= 2)
//         goodY.push_back(curr);

//     if (len == 10)
//         return;

//     genAllY(curr * 10 + d1, d1, d2, len + 1);

//     if (d1 != d2)
//         genAllY(curr * 10 + d2, d1, d2, len + 1);
// }

// void solve()
// {
//     int x;
//     cin >> x;

//     for (int y : goodY)
//     {
//         if (isGood(x * y))
//         {
//             cout << y << '\n';
//             return;
//         }
//     }
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     for (int d1 = 0; d1 <= 9; d1++)
//     {
//         for (int d2 = d1; d2 <= 9; d2++)
//         {
//             if (d1 != 0)
//                 genAllY(d1, d1, d2, 1);

//             if (d2 != 0 && d1 != d2)
//                 genAllY(d2, d1, d2, 1);
//         }
//     }

//     sort(goodY.begin(), goodY.end(), [](int a, int b)
//          {
//              int la = to_string(a).size();
//              int lb = to_string(b).size();

//              if (la != lb)
//                  return la < lb;

//              return a < b; });

//     goodY.erase(unique(goodY.begin(), goodY.end()), goodY.end());

//     int t;
//     cin >> t;

//     while (t--)
//         solve();
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{

    int n;
    cin >> n;

    int d = (int)to_string(n).size();

    int p = 1;

    for (int i = 0; i < d; i++)
    {
        p *= 10;
    }

    cout << p + 1 << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}