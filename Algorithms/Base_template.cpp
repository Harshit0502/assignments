#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Shortcuts
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define yes cout << "YES\n"
#define no cout << "NO\n"

// Debug (disable in submission)
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int x) {cerr << x;}
void _print(ll x) {cerr << x;}
void _print(string x) {cerr << x;}
void _print(char x) {cerr << x;}
void _print(ld x) {cerr << x;}
void _print(double x) {cerr << x;}
template<class T, class V> void _print(pair<T, V> p);
template<class T> void _print(vector<T> v);
template<class T> void _print(set<T> v);
template<class T, class V> void _print(map<T, V> v);

template<class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template<class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class V> void _print(map<T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// Constants
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const int MOD1 = 998244353;
const double EPS = 1e-9;

// Type Aliases
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

// Modular arithmetic helpers
ll mod_add(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a+b+m)%m; }
ll mod_sub(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a-b+m)%m; }
ll mod_mul(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a*b)%m; }
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1; a %= m;
    while(b>0) {
        if(b&1) res = (res*a)%m;
        a = (a*a)%m; b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m-2, m); } // m must be prime

// Main solve function
void solve() {
    // your code
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
