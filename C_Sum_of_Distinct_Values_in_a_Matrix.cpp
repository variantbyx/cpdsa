#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestsNumT;
    scanf("%d", &TestsNumT);
    while (TestsNumT--)
    {
        long long n, m, x, y;
        scanf("%lld %lld %lld %lld", &n, &m, &x, &y);
        vector<int> a(x), b(y);
        for (auto &v : a)
            scanf("%d", &v);
        for (auto &v : b)
            scanf("%d", &v);
        long long T = n + m - 1, cntA = 0, cntB = 0, tot = 0, sum = 0;
        int i = (int)x - 1, j = (int)y - 1;
        while ((i >= 0 || j >= 0) && tot < T)
        {
            int val, cat;
            if (j < 0 || (i >= 0 && a[i] > b[j]))
            {
                val = a[i];
                cat = 0;
                i--;
            }
            else if (i < 0 || b[j] > a[i])
            {
                val = b[j];
                cat = 1;
                j--;
            }
            else
            {
                val = a[i];
                cat = 2;
                i--;
                j--;
            }
            if (cat == 0)
            {
                if (cntA + 1 <= n)
                {
                    cntA++;
                    tot++;
                    sum += val;
                }
            }
            else if (cat == 1)
            {
                if (cntB + 1 <= m)
                {
                    cntB++;
                    tot++;
                    sum += val;
                }
            }
            else
            {
                tot++;
                sum += val;
            }
        }
        printf("%lld\n", sum);
    }
}