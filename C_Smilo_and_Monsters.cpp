// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     int x = 0;
//     int att = 0;

//     int sum = accumulate(a.begin(), a.end(), 0);

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= 1)
//         {
//             sum--;
//             a[i]--;
//             att++;
//             x++;
//         }
//         else if (a[i] == x)
//         {
//             sum -= x;
//             a[i] -= x;
//             x = 0;
//             att++;
//         }
//         if (!sum)
//             break;
//     }

//     cout << att << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<long long> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     sort(a.begin(), a.end());

//     long long ans = 0;
//     long long x = 0;

//     int l = 0;
//     int r = n - 1;

//     while (l <= r)
//     {
//         if (l == r)
//         {
//             ans += (a[l] + 1) / 2;
//             break;
//         }

//         if (x >= a[l])
//         {
//             ans++;
//             x = 0;
//             l++;
//         }
//         else
//         {
//             long long need = a[l] - x;

//             if (a[r] >= need)
//             {
//                 ans += need;
//                 x += need;
//                 a[r] -= need;
//             }
//             else
//             {
//                 ans += a[r];
//                 x += a[r];
//                 r--;
//             }
//         }
//     }

//     cout << ans << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<long long> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     sort(a.begin(), a.end());

//     long long x = 0;
//     long long attacks = 0;

//     int l = 0;
//     int r = n - 1;

//     while (l <= r)
//     {
//         while (l <= r && a[l] == 0)
//             l++;

//         while (l <= r && a[r] == 0)
//             r--;

//         if (l > r)
//             break;

//         // build combo using smallest horde
//         a[l]--;
//         x++;
//         attacks++;

//         if (a[l] == 0)
//             l++;

//         // if largest horde can absorb combo
//         if (l <= r && x > 0 && a[r] >= x)
//         {
//             a[r] -= x;
//             x = 0;
//             attacks++;

//             if (a[r] == 0)
//                 r--;
//         }
//     }

//     cout << attacks << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0LL);
    int rem = sum / 2;
    int a1 = sum - rem;

    sort(rbegin(a), rend(a));

    for (int x : a)
    {
        if (rem <= 0)
            break;

        rem -= x;
        a1++;
    }

    cout << a1 << "\n";
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