#include <bits/stdc++.h>
using namespace std;

// bool isUnique(vector<int> &arr)
// {
//     bool ok = true;
//     int n = arr.size();
//     unordered_map<int, int> mp;

//     for (int x : arr)
//         mp[x]++;

//     if (mp.size() != n)
//         ok = false;

//     return ok;
// }

bool check(vector<int> &a, int bad)
{
    int l = 0;
    int r = (int)a.size() - 1;

    while (l < r)
    {
        if (a[l] == a[r])
        {
            l++;
            r--;
        }
        else if (a[l] == bad)
        {
            l++;
        }
        else if (a[r] == bad)
        {
            r--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;

    while (l < r && a[l] == a[r])
    {
        l++;
        r--;
    }

    if (l >= r)
    {
        cout << "YES\n";
        return;
    }

    if (check(a, a[l]) || check(a, a[r]))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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