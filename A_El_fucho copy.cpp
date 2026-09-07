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
    int n;
    cin >> n;

    vi winners(n), losers;

    iota(winners.begin(), winners.end(), 1);

    int matches = 0;

    while (winners.size() > 1 || losers.size() > 1)
    {
        vi nextWinners, nextLosers;
        for (int i = 0; i + 1 < (int)winners.size(); i += 2)
        {
            matches++;
            nextWinners.push_back(winners[i]);
            nextLosers.push_back(winners[i + 1]);
        }

        if (winners.size() % 2 == 1)
            nextWinners.push_back(winners.back());

        vi survivors;

        for (int i = 0; i + 1 < (int)losers.size(); i += 2)
        {
            matches++;
            survivors.push_back(losers[i]);
        }
        if (losers.size() % 2 == 1)
            survivors.push_back(losers.back());

        winners = nextWinners;
        losers = survivors;

        for (int x : nextLosers)
            losers.push_back(x);
    }
    matches++;
    cout << matches << endl;
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