#include <bits/stdc++.h>
using namespace std;

bool isAllNeg(vector<int> &a)
{
    int n = a.size();

    bool found = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            found = false;
            break;
        }
    }

    return found;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int j = n - 1;

    if (isAllNeg(a))
    {
        cout << 0 << "\n";
        return;
    }

    vector<int> ans;

    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (cnt % 2)
            a[i] = -a[i];

        if (a[i] > 0)
        {
            cnt++;
            ans.push_back(i + 1);
        }
    }

    cout << cnt << "\n";
    for (int x : ans)
        cout << x << " ";

    cout << "\n";
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