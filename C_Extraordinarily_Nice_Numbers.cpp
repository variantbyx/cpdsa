#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int oddCnt = 0, evenCnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0) evenCnt++;
             else oddCnt++;
        }
    }

    if (oddCnt == evenCnt)
        cout << "yes\n";
    else
        cout << "no\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}