#include <bits/stdc++.h>
using namespace std;

int maxi = 200000; // must be large enough for 10001 primes

void sieve()
{
    vector<int> a(maxi, 1);

    a[0] = 0;
    a[1] = 0;

    for (int i = 2; i * i < maxi; i++)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j < maxi; j += i)
                a[j] = 0;
        }
    }

    int cnt = 0;

    for (int i = 2; i < maxi; i++)
    {
        if (a[i])
        {
            cnt++;
            if (cnt == 10001)
            {
                cout << i << "\n"; // 10001st prime
                break;
            }
        }
    }
}

int main()
{
    sieve();
    return 0;
}
