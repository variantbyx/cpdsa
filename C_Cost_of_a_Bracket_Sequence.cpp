#include <bits/stdc++.h>
using namespace std;

int longestValidSubsequence(string &s)
{
    int open_brackets = 0;
    int max_length = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            open_brackets++;
        }
        else if (c == ')')
        {
            // If there is a matching opening bracket available
            if (open_brackets > 0)
            {
                open_brackets--;
                max_length += 2; // A pair consists of 2 brackets
            }
        }
    }

    return max_length;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // build prefix and suffix for ( and ) respectively

    vector<int> left, right;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            left.push_back(i);
        else
            right.push_back(i);
    }

    // construct the mask

    int miniCost = INT_MAX;

    string ans(n, '0');

    for (int i = 0; i <= k; i++)
    {
        int delOp = i;
        int delCl = k - i;

        if (delOp > (int)left.size())
            continue;
        if (delCl > (int)right.size())
            continue;

        string mask(n, '0');

        for (int j = 0; j < delOp; j++)
        {
            mask[left[j]] = '1';
        }

        for (int j = 0; j < delCl; j++)
        {
            mask[right[right.size() - 1 - j]] = '1';
        }

        // build bracket string for mask actually remaining string;

        string maskedSeq;

        for (int i = 0; i < n; i++)
        {
            if (mask[i] == '0')
            {
                maskedSeq.push_back(s[i]);
            }
        }
        int costRBS = longestValidSubsequence(maskedSeq);

        if (costRBS < miniCost)
        {
            miniCost = costRBS;

            ans = mask;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}