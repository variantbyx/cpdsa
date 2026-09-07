#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long st[N][20], LOG[N]; // sparse table + log table

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Precompute log values
    LOG[1] = 0;
    for (int i = 2; i <= n; i++)
        LOG[i] = LOG[i / 2] + 1;

    // Build Sparse Table - level 0
    for (int i = 0; i < n; i++)
        st[i][0] = a[i];

    // Build Sparse Table - other levels
    for (int j = 1; j < 20; j++)
    {
        for (int i = 0; i + (1 << j) <= n; i++)
        {
            st[i][j] = gcd(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }

    // Answer queries
    while (q--)
    {
        int L, R;
        cin >> L >> R;
        L--, R--; // convert to 0-indexing

        int k = LOG[R - L + 1];
        long long ans = gcd(st[L][k], st[R - (1 << k) + 1][k]);
        cout << ans << "\n";
    }
}
