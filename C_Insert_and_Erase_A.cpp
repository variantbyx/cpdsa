#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    string s2 = "", t2 = "";

    for (char c : S)
        if (c != 'A')
            s2 += c;

    for (char c : T)
        if (c != 'A')
            t2 += c;

    if (s2 != t2)
    {
        cout << -1;
        return 0;
    }

    int countS = 0, countT = 0;

    for (char c : S)
        if (c == 'A')
            countS++;
    for (char c : T)
        if (c == 'A')
            countT++;

    cout << abs(countS - countT);

    return 0;
}