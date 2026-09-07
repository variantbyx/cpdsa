// /*-----------------------------------------------
// Author : Lukesh Poddar
// Handle : lukeshpoddar
// -----------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// // ---------- Short Typedefs ----------
// // Type aliases
// #define ll long long
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// // Common vectors
// #define vi vector<int>
// #define vll vector<ll>
// #define vpi vector<pii>
// #define vpl vector<pll>
// #define vc vector<char>
// #define vs vector<string>
// #define vbl vector<bool>
// // Sets
// #define si set<int>
// #define sli set<ll>
// #define sc set<char>
// #define ss set<string>
// // Unordered sets
// #define usi unordered_set<int>
// #define usll unordered_set<ll>
// #define usc unordered_set<char>
// #define uss unordered_set<string>
// // Maps
// #define mii map<int, int>
// #define mll map<ll, ll>
// #define mci map<char, int>
// #define msi map<string, int>
// // Unordered maps
// #define umii unordered_map<int, int>
// #define umll unordered_map<ll, ll>
// #define umci unordered_map<char, int>
// #define umsi unordered_map<string, int>
// // Priority queues
// #define minpq priority_queue<int, vector<int>, greater<int>>
// #define maxpq priority_queue<int>
// #define minpql priority_queue<ll, vector<ll>, greater<ll>>
// #define maxpql priority_queue<ll>
// // Deques and queues
// #define dq deque<int>
// #define q queue<int>
// #define qll queue<ll>
// // Stack
// #define stk stack<int>
// #define stkll stack<ll>

// // ---------- Shortcuts ----------
// #define pb push_back
// #define eb emplace_back
// #define ff first
// #define ss second
// #define all(v) (v).begin(), (v).end()
// #define rall(v) (v).rbegin(), (v).rend()
// #define sz(x) ((int)(x).size())
// #define uniq(v) (v).erase(unique(all(v)), (v).end())

// // ---------- Loops ----------
// #define rep(i, a, b) for (int i = (a); i < (b); i++)
// #define reep(i, a, b) for (int i = (a); i <= (b); i++)
// #define rrep(i, a, b) for (int i = (a); i >= (b); i--)
// #define rreep(i, a, b) for (int i = (a); i > (b); i--)
// #define repLL(i, a, b) for (long long i = (a); i < (b); i++)
// #define reepLL(i, a, b) for (long long i = (a); i <= (b); i++)
// #define rrepLL(i, a, b) for (long long i = (a); i >= (b); i--)
// #define rreepLL(i, a, b) for (long long i = (a); i > (b); i--)
// #define trav(x, a) for (auto &x : a)

// // ---------- I/O ----------
// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(0)
// #define endl '\n'

// // ---------- Utility ----------
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define dbg(x) cerr << #x << " = " << (x) << endl
// #define print(v)          \
//     for (auto &x : v)     \
//         cout << x << " "; \
//     cout << endl
// #define input(v, n)             \
//     for (int _ = 0; _ < n; _++) \
//     {                           \
//         int x;                  \
//         cin >> x;               \
//         v.pb(x);                \
//     }

// struct Node
// {
//     ll len, sum;
// };

// Node better(Node a, Node b)
// {
//     if (a.len != b.len)
//         return a.len > b.len ? a : b;
//     return a.sum > b.sum ? a : b;
// }

// // ---------- Solve ----------
// void solve()
// {
//     int n;
//     cin >> n;

//     vll a;
//     input(a, n);

//     vector<Node> posdp(n, {0, LLONG_MIN});
//     vector<Node> negdp(n, {0, LLONG_MIN});

//     // initial con0-ditions

//     if (a[0] > 0)
//         posdp[0] = {1, a[0]};
//     else
//         negdp[0] = {1, a[0]};

//     rep(i, 1, n)
//     {
//         if (a[i] > 0)
//         {
//             posdp[i] = {1, a[i]};
//             posdp[i] = better(posdp[i], {negdp[i - 1].len + 1, negdp[i - 1].sum + a[i]});
//             negdp[i] = negdp[i - 1];
//         }
//         else
//         {
//             negdp[i] = {1, a[i]};
//             negdp[i] = better(negdp[i], {posdp[i - 1].len + 1, posdp[i - 1].sum + a[i]});
//             posdp[i] = posdp[i - 1];
//         }
//     }

//     Node res = better(posdp[n - 1], negdp[n - 1]);
//     cout << res.sum << endl;
// }

// int main()
// {
//     fastio;
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

bool allPos(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 0)
            return false;
    }
    return true;
}

bool allNeg(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 0)
            return false;
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    if (allPos(a) || allNeg(a))
    {
        cout << *max_element(a.begin(), a.end()) << "\n";
        return;
    }

    int sum = 0;
    vector<int> temp;
    temp.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {

        if ((a[i] > 0) != (a[i - 1] > 0))
        {
            sum += *max_element(temp.begin(), temp.end());
            temp.clear();
            temp.push_back(a[i]);
        }
        else
        {
            // sum += *max_element(temp.begin(), temp.end());
            // temp.clear();
            temp.push_back(a[i]);
        }
    }

    sum += *max_element(temp.begin(), temp.end());

    cout << sum << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}