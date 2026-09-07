#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int sec = 1;

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i - 1] <= a[i])
//             break;
//         int j = i;
//         if (a[i - 1] > a[i])
//         {
//             while (j + 1 < n && a[j + 1] < a[j])
//             {
//                 j++;
//             }
//         }

//         for (int k = i; k <= j; k++)
//         {
//             a[i] += pow(2, sec - 1);
//         }
//         sec++;
//     }

//     cout << sec << "\n";
// }

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll mx = a[0];
    ll mxNeed = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < mx)
            mxNeed = max(mxNeed, mx - a[i]);
        else
        {
            mx = a[i];
        }
    }

    ll ans = 0;

    while ((1LL << ans) - 1 < mxNeed)
        ans++;

    cout << ans << "\n";
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