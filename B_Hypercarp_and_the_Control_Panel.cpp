#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;

    arr.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr.push_back(a);
    }
    arr.push_back(0);

    n = arr.size();

    int ans = 1;
    for (int i = 1; i < n - 2; i++)
        if (arr[i] != arr[i + 1])
            ans++;

    int benefit = 0;
    for (int i = 0; i < n - 3; i++)
    {
        ll a = arr[i], b = arr[i + 1], c = arr[i + 2], d = arr[i + 3];

        if (a == b && c == d && b != c)
            benefit = 2;
        if (a == b && c != b && d != b)
            benefit = max(benefit, 1);
        if (c == d && b != c && a != c)
            benefit = max(benefit, 1);
    }

    cout << ans + benefit << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestsNumT;
    cin >> TestsNumT;

    while (TestsNumT--)
        solve();

    return 0;
}