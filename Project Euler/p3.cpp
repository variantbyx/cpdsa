#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 600851475143;
    long long maxi = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            maxi = i;
            n /= i;
        }
    }

    if (maxi > 1)
        maxi = n;
    cout << maxi << "\n";

    return 0;
}
