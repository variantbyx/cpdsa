#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int hr = 0;
    int stub = 0;

    while (a > 0)
    {
        hr += a;         // brun all candles
        stub += a;       // collect the stub
        a = stub / b;    // make new candle
        stub = stub % b; // collect remaining stub
    }

    cout << hr << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}