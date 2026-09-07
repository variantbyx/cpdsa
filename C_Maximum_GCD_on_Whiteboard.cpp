#include <bits/stdc++.h>
using namespace std;

// function to find gcd of entire vector
int findGCD(vector<int> &arr)
{
    int g = 0;
    for (int x : arr)
        g = __gcd(g, x);
    return g;
}

// split function based on rule x1 + x2 + x3 = x and 1 ≤ x1 ≤ x2 ≤ x3
pair<int, int> splitNum(int x)
{
    int x1 = x / 3;
    int x2 = (x - x1) / 2;
    int x3 = x - x1 - x2;
    if (x1 <= 0)
        x1 = 1;
    if (x2 <= 0)
        x2 = 1;
    if (x3 <= 0)
        x3 = 1;
    // return x1 and x3 (x2 is discarded)
    return make_pair(x1, x3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Step 1: find the number which divides the maximum number of elements
        int maxDiv = 1, maxCount = 0;
        for (int d = 1; d <= n; d++)
        {
            int cnt = 0;
            for (int x : a)
                if (x % d == 0)
                    cnt++;
            if (cnt > maxCount)
            {
                maxCount = cnt;
                maxDiv = d;
            }
        }

        // Step 2: store those not divided by gcd
        vector<int> notDiv;
        for (int x : a)
            if (x % maxDiv != 0)
                notDiv.push_back(x);

        // Step 3: erase operation
        int eraseCount = min(k, (int)notDiv.size());
        notDiv.erase(notDiv.begin(), notDiv.begin() + eraseCount);

        // Step 4: try splitting remaining undivided numbers
        for (int i = 0; i < (int)notDiv.size(); i++)
        {
            int x = notDiv[i];
            if (x >= 3)
            {
                pair<int, int> p = splitNum(x);
                int x1 = p.first;
                int x3 = p.second;
                notDiv[i] = x1;       // replace with first
                notDiv.push_back(x3); // add new one
            }
        }

        // merge back with divisible ones
        vector<int> finalArr;
        for (int x : a)
            if (x % maxDiv == 0)
                finalArr.push_back(x);
        for (int x : notDiv)
            finalArr.push_back(x);

        // Step 5: find final gcd (beauty)
        int ans = findGCD(finalArr);

        cout << ans << "\n";
    }
    return 0;
}
