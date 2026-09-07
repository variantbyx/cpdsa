#include <iostream>
using namespace std;

void print(int i)
{
    if (i < 0)
        return;

    cout << i << " ";
    print(i - 1);
}

void solve()
{
    int n;
    cin >> n;

    print(n);
}
int main()
{
    solve();
    return 0;
}