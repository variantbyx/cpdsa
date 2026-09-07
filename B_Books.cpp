// bool check(vector<int> &books, int mid, int t)
// {
//     int sum = 0;
//     for (int i = 0; i <= mid; i++)
//         sum += books[i];

//     return sum <= t;
// }

// int maxBooks(vector<int> &books, int n, int t)
// {
//     sort(books.begin(), books.end());
//     int l = 0, r = n - 1, ans = 0;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (check(books, mid, t))
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }
//     return ans;
// }
// typedef long long ll;
// int maxBooks(vector<int> &books, int n, int t)
// {
//     int l = 0;
//     ll sum = 0;
//     int ans = INT_MIN;
//     for (int r = 0; r < n; r++)
//     {
//         sum += books[r];
//         while (sum > t)
//         {
//             sum -= books[l];
//             l++;
//         }
//         ans = max(ans, r - l + 1);
//     }
//     return ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, t;
//     cin >> n >> t;
//     vector<int> books(n);
//     for (int &x : books)
//         cin >> x;
//     int ans = maxBooks(books, n, t);
//     cout << ans << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<int> &books, int mid, int t)
{
    ll sum = 0;
    for (int i = 0; i < mid; i++)
        sum += books[i];

    if (sum <= t)
        return true;

    for (int i = mid; i < books.size(); i++)
    {
        sum += books[i];
        sum -= books[i - mid];

        if (sum <= t)
            return true;
    }
    return false;
}

int maxBooks(vector<int> &books, int n, int t)
{
    int l = 0, r = n, ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(books, mid, t))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<int> books(n);
    for (int &x : books)
        cin >> x;

    int ans = maxBooks(books, n, t);

    cout << ans << "\n";
    return 0;
}
