#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;

    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            int len = r - l + 1;

            // Case 1: erase prefix
            if (l == 0 && r + 1 < n)
            {
                if (a[r + 1] - 1 == len)
                    ans = max(ans, len);
            }

            // Case 2: erase suffix
            else if (l > 0 && r == n - 1)
            {
                if (1000 - a[l - 1] == len)
                    ans = max(ans, len);
            }

            // Case 3: erase middle
            else if (l > 0 && r + 1 < n)
            {
                if (a[r + 1] - a[l - 1] - 1 == len)
                    ans = max(ans, len);
            }
        }
    }

    cout << ans << endl;
}
