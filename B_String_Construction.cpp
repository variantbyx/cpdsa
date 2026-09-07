#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string solve(ll n, ll k)
{
    if (k == 0)
    {
        if (n <= 0)
            return "";
        string res(n, '0');
        for (ll i = 0; i < n; i++)
            res[i] = (i % 2 == 0) ? '0' : '1';
        return res;
    }

    string base;
    bool sF;

    if (k == 1)
    {
        base = "00";
        sF = true;
    }
    else if (k % 2 == 0)
    {
        ll c = k / 2 + 1;
        base = string(c, '0') + string(c, '1');
        sF = false;
    }
    else
    {
        ll c = k / 2 + 1;
        base = string(c, '0') + string(c, '1') + "00";
        sF = false;
    }

    ll currSz = (ll)base.size();
    if (currSz > n)
        return "-1";

    ll rem = n - currSz;
    deque<char> dq(base.begin(), base.end());
    bool fT = sF;

    for (ll i = 0; i < rem; i++)
    {
        if (fT)
        {
            char opp = (dq.front() == '0') ? '1' : '0';
            dq.push_front(opp);
        }
        else
        {
            char opp = (dq.back() == '0') ? '1' : '0';
            dq.push_back(opp);
        }
        fT = !fT;
    }

    return string(dq.begin(), dq.end());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    return 0;
}