#include <iostream>
using namespace std;

int prod(int n)
{
    if (n == 0)
        return 1;

    int dig = n % 10;

    return dig * prod(n / 10);
}

int solve()
{
    int n;
    cin >> n;

    return prod(n);
}

int main()
{
    cout << solve();
    return 0;
}