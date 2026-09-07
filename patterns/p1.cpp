#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        cout << "*";
        for (int j = 0; j < c; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}