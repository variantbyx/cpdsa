#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{
    if (n == 0)
        return "0";

    string ans = "";

    while (n > 0)
    {
        ans += (n % 2) + '0';
        n /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

long long binaryToDecimal(string s)
{
    long long num = 0;

    for (char bit : s)
    {
        num = num * 2 + (bit - '0');
    }

    return num;
}

string xorStrings(string a, string b)
{
    string ans = "";

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            ans += '0';
        else
            ans += '1';
    }

    return ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    string aa = decimalToBinary(a);
    string bb = decimalToBinary(b);

    string s1, s2;

    for (int i = 1; i <= 32 - aa.size(); i++)
        s1 += '0';

    for (int i = 1; i <= 32 - bb.size(); i++)
        s2 += '0';

    s1 += aa;
    s2 += bb;

    // first operation

    string x1;

    for (int i = 0; i < 32; i++)
    {
        if (s1[i] == '1')
            x1 += '0';

        else if (s1[i] == '0' && s2[i] == '1')
            x1 += '1';

        else
            x1 += '0';
    }

    long long op1 = binaryToDecimal(x1);

    if (op1 > a)
    {
        cout << -1 << "\n";
        return;
    }

    int newa = a ^ op1;

    string stra = decimalToBinary(newa);

    string temp;

    for (int i = 1; i <= 32 - stra.size(); i++)
        temp += '0';

    temp += stra;

    stra = temp;

    // second operation

    string x2;

    for (int i = 0; i < 32; i++)
    {
        if (stra[i] == '1' && s2[i] == '0')
            x2 += '1';
        else
            x2 += '0';
    }

    long long op2 = binaryToDecimal(x2);

    if (op2 > newa)
    {
        cout << -1 << "\n";
        return;
    }

    cout << 2 << "\n";
    cout << op1 << " " << op2 << "\n";
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