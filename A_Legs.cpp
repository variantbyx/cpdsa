// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     int cows = n / 4;
//     int rem = n % 4;
//     int chicks = rem / 2;

//     cout << cows + chicks << "\n";
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int lo = 0, hi = n / 4, best = 0;

        // binary search for max possible cows
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            int legs_used = 4 * mid;
            int remaining = n - legs_used;

            if (remaining % 2 == 0 && remaining >= 0)
            {
                best = mid; // valid, try more cows
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1; // invalid, too many cows
            }
        }

        int cows = best;
        int chickens = (n - 4 * cows) / 2;
        cout << cows + chickens << "\n";
    }
    return 0;
}
