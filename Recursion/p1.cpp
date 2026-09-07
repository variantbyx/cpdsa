#include <iostream>
using namespace std;

void print(int i, int n)
{
    // base case
    if (i > n)
        return;

    cout << i << " " << endl;

    print(i + 1, n);
}

void solve()
{
    int n;
    cin >> n;

    print(0, n);
}

int main()
{
    solve();
    return 0;
}