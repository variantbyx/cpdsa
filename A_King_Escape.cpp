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
bool isSafe(int x, int y, int n, int ax, int ay)
{
    if (x < 1 || x > n || y < 1 || y > n)
        return false;
    if (x == ax || y == ay || abs(x - ax) == abs(y - ay))
        return false;
    return true;
}
void solve()
{

    int n;
    cin >> n;

    int a1, a2; // Alice’s queen
    cin >> a1 >> a2;

    int b1, b2; // Bob’s start
    cin >> b1 >> b2;

    int c1, c2; // Bob’s destination
    cin >> c1 >> c2;

    vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    queue<pii> qu;
    qu.push({b1, b2});
    visited[b1][b2] = true;

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while (!qu.empty())
    {
        auto curr = qu.front();
        qu.pop();

        int x = curr.ff;
        int y = curr.ss;

        if (x == c1 && y == c2)
        {
            yes << endl;
            return;
        }

        rep(i, 0, 8)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isSafe(nx, ny, n, a1, a2) && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                qu.push({nx, ny});
            }
        }
    }

    no;
}

int main()
{
    fastio;
    solve();
    return 0;
}