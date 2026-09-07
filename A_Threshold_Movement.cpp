#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, bool fr)
{
    int l = 0;
    int h = INT_MAX;

    int n = a.size();

    for (int i = 0; i < n; i++)
    {

        bool mr;

        if (fr)
            mr = (i % 2 == 0);
        else
            mr = (i % 2 == 1);

        if (mr)
        {

            h = min(h, a[i]);
        }
        else
        {

            l = max(l, a[i]);
        }
    }

    return l + 1 < h;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n % 2)
        {
            cout << "NO\n";
            continue;
        }

        if (check(a, true) || check(a, false))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}