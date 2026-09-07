#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long &x : a)
        cin >> x;

    if (k == 1)
    {
        cout << *min_element(a.begin(), a.end()) << endl;
    }
    else
    {
        cout << *max_element(a.begin(), a.end()) << endl;
    }
}
