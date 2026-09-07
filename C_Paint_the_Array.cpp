#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long gEven = 0, gOdd = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                gEven = __gcd(gEven, a[i]);
            else
                gOdd = __gcd(gOdd, a[i]);
        }

        bool ok = true;

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % gEven == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << gEven << '\n';
            continue;
        }

        ok = true;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % gOdd == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << gOdd << '\n';
        else
            cout << 0 << '\n';
    }
}