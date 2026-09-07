#include <iostream>
using namespace std;

int cntDig(long long n)
{
    if (n == 0)
        return 1;

    return 1 + cntDig(n / 10);
}

int solve()
{
    int n;
    cin >> n;

    return cntDig(n);
}

int main()
{
    cout << solve();
    return 0;
}