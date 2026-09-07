#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string original = s;
    reverse(s.begin(), s.end());
    if (original == s)
        return true;
    else
        return false;
}

int main()
{
    int s = 100, e = 999;
    int maxi = 0;
    for (int i = s; i <= e; i++)
    {
        for (int j = s + 1; j <= e; j++)
        {
            int prod = i * j;
            string str = to_string(prod);
            if (isPalindrome(str))
                maxi = max(maxi, prod);
        }
    }

    cout << maxi << "\n";
    return 0;
}
