/*-----------------------------------------------
Author : Lukesh Poddar
Handle : lukeshpoddar
-----------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

// ---------- Short Typedefs ----------
// Type aliases
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
// Common vectors
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define vc vector<char>
#define vs vector<string>
#define vbl vector<bool>
// Sets
#define si set<int>
#define sli set<ll>
#define sc set<char>
#define ss set<string>
// Unordered sets
#define usi unordered_set<int>
#define usll unordered_set<ll>
#define usc unordered_set<char>
#define uss unordered_set<string>
// Maps
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define msi map<string, int>
// Unordered maps
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
// Priority queues
#define minpq priority_queue<int, vector<int>, greater<int>>
#define maxpq priority_queue<int>
#define minpql priority_queue<ll, vector<ll>, greater<ll>>
#define maxpql priority_queue<ll>
// Deques and queues
#define dq deque<int>
#define q queue<int>
#define qll queue<ll>
// Stack
#define stk stack<int>
#define stkll stack<ll>

// ---------- Shortcuts ----------
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) ((int)(x).size())
#define uniq(v) (v).erase(unique(all(v)), (v).end())

// ---------- Loops ----------
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define reep(i, a, b) for (int i = (a); i <= (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
#define rreep(i, a, b) for (int i = (a); i > (b); i--)
#define repLL(i, a, b) for (long long i = (a); i < (b); i++)
#define reepLL(i, a, b) for (long long i = (a); i <= (b); i++)
#define rrepLL(i, a, b) for (long long i = (a); i >= (b); i--)
#define rreepLL(i, a, b) for (long long i = (a); i > (b); i--)
#define trav(x, a) for (auto &x : a)

// ---------- I/O ----------
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define endl '\n'

// ---------- Utility ----------
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dbg(x) cerr << #x << " = " << (x) << endl
#define print(v)          \
    for (auto &x : v)     \
        cout << x << " "; \
    cout << endl
#define input(v, n)             \
    for (int _ = 0; _ < n; _++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x);                \
    }

// ---------- Solve ----------
void solve()
{
    int n;
    cin >> n;

    vll a(n + 1);
    reep(i, 1, n)
    {
        cin >> a[i];
    }

    ll total = 0;

    reep(i, 1, n - 2)
    {
        total += a[i];
    }

    ll res = total + a[n] - a[n - 1];

    cout << res << endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}