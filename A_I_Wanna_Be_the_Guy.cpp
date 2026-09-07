#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> st;

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    if (st.size() == n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}