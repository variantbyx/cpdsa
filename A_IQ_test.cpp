#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int cntOdd = 0, cntEven = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            cntEven++;
        else
            cntOdd++;
    }

    for (int i = 0; i < n; i++)
    {

        if (cntEven > cntOdd && arr[i] % 2 != 0)
        {
            cout << i + 1 << "\n";
            break;
        }
        else if (cntEven < cntOdd && arr[i] % 2 == 0)
        {
            cout << i + 1 << "\n";
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}