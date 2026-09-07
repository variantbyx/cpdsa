// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve()
// {
//     int n, q;
//     cin >> n >> q;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<int> ans;

//     while (q--)
//     {
//         int x;
//         cin >> x;

//         queue<int> notToPushBack;
//         queue<int> toPushBack;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] != x)
//                 notToPushBack.push(a[i]);
//             else
//                 toPushBack.push(x);
//         }

//         vector<int> temp;

//         while (!notToPushBack.empty())
//         {
//             int front = notToPushBack.front();
//             temp.push_back(front);
//             notToPushBack.pop();
//         }

//         while (!toPushBack.empty())
//         {
//             int front = toPushBack.front();
//             temp.push_back(front);
//             toPushBack.pop();
//         }
//         a = temp;
//     }

//     for (int x : a)
//         cout << x << " ";
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;

    list<int> lst;
    vector<list<int>::iterator> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        lst.push_back(x);
        pos[x] = prev(lst.end());
    }

    while (q--)
    {
        int x;
        cin >> x;

        lst.erase(pos[x]);

        lst.push_back(x);

        pos[x] = prev(lst.end());
        // lst.splice(lst.end(), lst, pos[x]);
    }

    for (int x : lst)
        cout << x << " ";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}