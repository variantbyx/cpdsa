#include <bits/stdc++.h>
using namespace std;

long long mergeSort(vector<long long> &b, int l, int r)
{
    if (l >= r)
        return 0;

    int mid = (l + r) / 2;

    long long inv = 0;

    inv += mergeSort(b, l, mid);
    inv += mergeSort(b, mid + 1, r);

    vector<long long> temp;

    int i = l;
    int j = mid + 1;

    while (i <= mid && j <= r)
    {
        if (b[i] <= b[j])
        {
            temp.push_back(b[i++]);
        }
        else
        {
            inv += (mid - i + 1);
            temp.push_back(b[j++]);
        }
    }

    while (i <= mid)
        temp.push_back(b[i++]);

    while (j <= r)
        temp.push_back(b[j++]);

    for (int k = l; k <= r; k++)
    {
        b[k] = temp[k - l];
    }

    return inv;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<long long, long long>> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end()); // sort by a

    vector<long long> b(n);

    for (int i = 0; i < n; i++)
    {
        b[i] = p[i].second;
    }

    cout << mergeSort(b, 0, n - 1) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}