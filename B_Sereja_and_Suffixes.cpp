#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> uni(n + 1);

    unordered_set<int> st;

    for (int i = n; i >= 1; i--)
    {
        st.insert(a[i]);

        uni[i] = st.size();
    }

    while (m--)
    {
        int l;
        cin >> l;

        cout << uni[l] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}