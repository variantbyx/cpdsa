#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a = 0, b = 1, sum = 0;
    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;
        long long c = a + b;
        a = b;
        b = c;
    }

    cout << sum << "\n";

    return 0;
}
