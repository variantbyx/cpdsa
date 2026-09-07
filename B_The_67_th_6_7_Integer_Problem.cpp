#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> a(7);

    for (int &x : a)
        cin >> x;

    unordered_map<int, int> mp;

    for (int &x : a)
        mp[x]++;

    int maxi = INT_MIN;
    int sumof6 = 0;
    for (auto &it : mp)
    {
        if (maxi < it.first)
        {
            maxi = it.first;
        }
        sumof6 += it.first * it.second;
        }
    sumof6 -= maxi;

    cout << maxi - sumof6 << "\n";
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