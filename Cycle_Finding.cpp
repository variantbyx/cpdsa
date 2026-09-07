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
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<tuple<int, int, ll>> edges(m);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        edges[i] = make_tuple(u, v, w);
    }

    const ll INF = 1e18;
    vi dist(n + 1, INF);

    dist[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j=0;)
        {
            int 
            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // check if cycle

    for (auto &[u, v, w] : edges)
    {
        if (dist[u] != INF && dist[u] + w < dist[v])
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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