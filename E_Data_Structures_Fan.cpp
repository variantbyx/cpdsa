#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> prefixXor(const vector<int> &arr)
{
    int n = arr.size();

    vector<int> pref(n);

    if (n == 0)
        return pref;

    pref[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] ^ arr[i];
    }

    return pref;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    string s;
    cin >> s;

    vector<int> pfXor = prefixXor(a);

    int xor0 = 0, xor1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            xor0 ^= a[i];
        else
            xor1 ^= a[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r;
            cin >> l >> r;

            // problem faced
            // even flipping for 1<=l<=r<=n for q queries takes O(n*q) TC
            // also, for each type 1 query, it updates the string, for each type 1 query again flipping requires.

            l--;
            r--;

            int seg = pfXor[r];

            if (l > 0)
                seg ^= pfXor[l - 1];

            xor0 ^= seg;
            xor1 ^= seg;
        }
        else
        {
            int g;
            cin >> g;

            // int seg = 1;

            // for (int i = 0; i < n; i++)
            // {
            //     if (g == 0)
            //     {
            //         if (s[i] - '0' == 0)
            //         {
            //             seg ^= a[i];
            //         }
            //         xor0 ^= seg;
            //         cout << xor0 << "\n";
            //         return;
            //     }
            //     else
            //     {
            //         seg ^= a[i];
            //         xor1 ^= seg;
            //         cout << xor1 << "\n";
            //     }
            // }

            if (g == 0)
                cout << xor0 << " ";
            else
                cout << xor1 << " ";
        }
        }
    cout << "\n";
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