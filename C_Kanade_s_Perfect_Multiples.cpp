#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        unordered_map<long long, int> freq;
        for (auto &x : a)
        {
            cin >> x;
            freq[x]++;
        }

        // Create sorted unique values of a
        vector<long long> vals;
        vals.reserve(freq.size());
        for (auto &p : freq)
            vals.push_back(p.first);
        sort(vals.begin(), vals.end());

        // ---- Step 1: find eligible b candidates ----
        vector<long long> eligible;
        for (auto x : vals)
        {
            bool ok = true;
            for (long long mul = x; mul <= k; mul += x)
            {
                if (!freq.count(mul))
                {
                    ok = false;
                    break;
                }
                // Optimization: if mul > max value in array and still <= k,
                // then no chance it exists → break
                if (mul > vals.back())
                    break;
            }
            if (ok)
                eligible.push_back(x);
        }

        if (eligible.empty())
        {
            cout << -1 << "\n";
            continue;
        }

        // ---- Step 2: greedy picking (smallest to largest) ----
        // "covered[v]" means the number v in array is already covered by some divisor in B
        unordered_map<long long, bool> covered;
        for (auto v : vals)
            covered[v] = false;

        vector<long long> B;
        for (auto b : eligible)
        {
            bool needed = false;
            // check if b is needed (there exists a number divisible by b that is not covered)
            for (auto v : vals)
            {
                if (v % b == 0 && !covered[v])
                {
                    needed = true;
                    break;
                }
            }
            if (!needed)
                continue;

            // choose b
            B.push_back(b);
            // mark all divisible as covered
            for (auto v : vals)
            {
                if (v % b == 0)
                    covered[v] = true;
            }
        }

        // final check: did we cover all?
        bool ok = true;
        for (auto v : vals)
        {
            if (!covered[v])
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << -1 << "\n";
            continue;
        }

        cout << B.size() << "\n";
        for (auto b : B)
            cout << b << " ";
        cout << "\n";
    }
    return 0;
}
