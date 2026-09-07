#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (long long j = 1;; j++)
    {
        bool ok = true;
        for (int i = 1; i <= 20; i++)
        {
            if (j % i != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << j << "\n";
            break;
        }
    }

    return 0;
}
