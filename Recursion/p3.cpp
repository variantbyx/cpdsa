#include <iostream>
using namespace std;

int sumOfDig(int n)
{
    if (n == 0)
        return 0;

    int dig = n % 10;

    return dig + sumOfDig(n / 10);
}

int solve()
{
    int n;
    cin >> n;

    return sumOfDig(n);
}

int main()
{
    cout << solve();
    return 0;
}