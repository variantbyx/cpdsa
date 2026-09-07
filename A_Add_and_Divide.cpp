/*───────────────────────────────────────────────
Author : Lukesh Poddar
Handle : lukeshpoddar
───────────────────────────────────────────────*/
#include <bits/stdc++.h>
using namespace std;

// ---------- Short Typedefs ----------
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define si set<int>
#define sli set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>

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
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
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
int cntDivs(ll a, ll b)
{
    int cnt = 0;
    while (a > 0)
    {
        a /= b;
        cnt++;
    }
    return cnt;
}
void solve()
{
    ll a, b;
    cin >> a >> b;

    int minOps = INT_MAX;

    ll initB = b;
    if (b == 1)
        initB = 2;

    for (int i = 0; i <= 40; i++)
    {
        ll bprime = initB + i;
        int divs = cntDivs(a, bprime);
        minOps = min(minOps, i + divs + (b == 1 ? 1 : 0));
    }

    cout << minOps << endl;
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