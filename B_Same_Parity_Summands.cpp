#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{

    int n, k;
    cin >> n >> k;

    if (k > n)
    {
        cout << "NO\n";
        return;
    }

    // if (n % k == 0)
    // {
    //     int sum = 0;
    //     sum += n / k;
    //     if (sum == n)
    //     {
    //         for (int i = 0; i < k; i++)
    //         {
    //             cout << n / k << " ";
    //         }
    //         cout << "\n";
    //     }
    // }
    // else{
    //     int sum = 0;
    //     int num = n / k;
    //     sum += num;
    //     int rem = n - num;
    //     if(n-sum<k){
    //         cout << "NO\n";
    //     }

    //     else{
    //         cout << "YES\n";

    //     }

    // }

    int case1 = n - (k - 1);
    int case2 = n - 2 * (k - 1);

    if (case2 % 2 == 0 && case2 > 0)
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)

            cout << 2 << " ";
        cout << case2 << "\n";
    }
    else if (case1 % 2 != 0 && case1 > 0)
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)

            cout << 1 << " ";
        cout << case1 << "\n";
    }

    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}