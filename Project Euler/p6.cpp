#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sumSq = 0;
    for (int i = 1; i <= 100; i++)
    {
        int sq = i * i;

        sumSq += sq;
    }

    long long sum100 = 100 * (100 + 1) / 2;
    long long sum100Sq = sum100 * sum100;

    cout << sum100Sq - sumSq << "\n";
    return 0;
}
